#include "MatrixAlgebra/Matrix.h"
#include <format>

using namespace MatrixAlgebra;

//------------------------------ Matrix ------------------------------

Matrix::Matrix(int numRows /*= 0*/, int numCols /*= 0*/)
{
	this->numRows = 0;
	this->numCols = 0;
	this->elementMatrix = nullptr;

	this->SetSize(numRows, numCols);
}

Matrix::Matrix(const Matrix& matrix)
{
	this->numRows = 0;
	this->numCols = 0;
	this->elementMatrix = nullptr;

	this->SetAsCopyOf(matrix);
}

/*virtual*/ Matrix::~Matrix()
{
	this->SetSize(0, 0);
}

bool Matrix::SetSize(int numRows, int numCols)
{
	if (this->numRows == numRows && this->numCols == numCols)
		return true;

	if (numRows <= 0 || numCols <= 0)
		return false;

	for (int row = 0; row < this->numRows; row++)
		delete[] this->elementMatrix[row];
	delete[] this->elementMatrix;

	this->numRows = numRows;
	this->numCols = numCols;

	this->elementMatrix = new double* [this->numRows];

	for (int row = 0; row < this->numRows; row++)
	{
		this->elementMatrix[row] = new double[this->numCols];

		for (int col = 0; col < this->numCols; col++)
		{
			this->elementMatrix[row][col] = 0.0;
		}
	}

	return true;
}

void Matrix::GetSize(int& numRows, int& numCols) const
{
	numRows = this->numRows;
	numCols = this->numCols;
}

int Matrix::GetNumRows() const
{
	return this->numRows;
}

int Matrix::GetNumCols() const
{
	return this->numCols;
}

bool Matrix::LocationInBounds(int row, int col) const
{
	if (row < 0 || row >= this->numRows)
		return false;

	if (col < 0 || col >= this->numCols)
		return false;

	return true;
}

bool Matrix::HasSameDimensionsAs(const Matrix& matrix) const
{
	if (this->numRows != matrix.numRows)
		return false;

	if (this->numCols != matrix.numCols)
		return false;

	return true;
}

void Matrix::SetAsZeroMatrix()
{
	for (int row = 0; row < this->numRows; row++)
		for (int col = 0; col < this->numCols; col++)
			this->elementMatrix[row][col] = 0.0;
}

bool Matrix::SetAsIdentityMatrix()
{
	if (this->numRows != this->numCols)
		return false;

	for (int row = 0; row < this->numRows; row++)
		for (int col = 0; col < this->numCols; col++)
			this->elementMatrix[row][col] = (row == col) ? 1.0 : 0.0;

	return true;
}

void Matrix::SetAsCopyOf(const Matrix& matrix)
{
	this->SetSize(matrix.numRows, matrix.numCols);

	for (int row = 0; row < this->numRows; row++)
		for (int col = 0; col < this->numCols; col++)
			this->elementMatrix[row][col] = matrix.elementMatrix[row][col];
}

bool Matrix::SetAsSubMatrixOf(const Matrix& matrix, int firstRow, int lastRow, int firstCol, int lastCol)
{
	if (!this->LocationInBounds(firstRow, firstCol))
		return false;

	if (!this->LocationInBounds(lastRow, lastCol))
		return false;

	if (firstRow > lastRow || firstCol > lastCol)
		return false;

	this->SetSize(lastRow - firstRow + 1, lastCol - firstCol + 1);

	for (int row = 0; row < this->numRows; row++)
		for (int col = 0; col < this->numCols; col++)
			this->elementMatrix[row][col] = matrix.elementMatrix[firstRow + row][firstCol + col];

	return true;
}

bool Matrix::SetAsCofactorSubMatrixOf(const Matrix& matrix, int excludedRow, int excludedCol)
{
	if (matrix.numRows <= 1 || matrix.numCols <= 1)
		return false;

	if (!this->LocationInBounds(excludedRow, excludedCol))
		return false;

	this->SetSize(matrix.numRows - 1, matrix.numCols - 1);

	for (int row = 0; row < this->numRows; row++)
	{
		if (row == excludedRow)
			continue;

		int i = (row < excludedRow) ? row : (row - 1);

		for (int col = 0; col < this->numCols; col++)
		{
			if (col == excludedCol)
				continue;

			int j = (col < excludedCol) ? col : (col - 1);

			this->elementMatrix[i][j] = matrix.elementMatrix[row][col];
		}
	}

	return true;
}

bool Matrix::GetElement(int row, int col, double& element) const
{
	if (!this->LocationInBounds(row, col))
		return false;

	element = this->elementMatrix[row][col];
	return true;
}

double Matrix::GetElement(int row, int col) const
{
	double element = 0.0;
	this->GetElement(row, col, element);
	return element;
}

bool Matrix::SetElement(int row, int col, double element)
{
	if (!this->LocationInBounds(row, col))
		return false;

	this->elementMatrix[row][col] = element;
	return true;
}

bool Matrix::Add(const Matrix& matrixA, const Matrix& matrixB)
{
	if (!matrixA.HasSameDimensionsAs(matrixB) || !this->HasSameDimensionsAs(matrixA))
		return false;

	for (int row = 0; row < this->numRows; row++)
		for (int col = 0; col < this->numCols; col++)
			this->elementMatrix[row][col] = matrixA.elementMatrix[row][col] + matrixB.elementMatrix[row][col];

	return true;
}

bool Matrix::Subtract(const Matrix& matrixA, const Matrix& matrixB)
{
	if (!matrixA.HasSameDimensionsAs(matrixB) || !this->HasSameDimensionsAs(matrixA))
		return false;

	for (int row = 0; row < this->numRows; row++)
		for (int col = 0; col < this->numCols; col++)
			this->elementMatrix[row][col] = matrixA.elementMatrix[row][col] - matrixB.elementMatrix[row][col];

	return true;
}

bool Matrix::Multiply(const Matrix& matrixA, const Matrix& matrixB)
{
	if (matrixA.numCols != matrixB.numRows)
		return false;

	if (this->numRows != matrixA.numRows || this->numCols != matrixB.numCols)
		return false;

	for (int row = 0; row < this->numRows; row++)
	{
		for (int col = 0; col < this->numCols; col++)
		{
			double sum = 0.0;

			for (int i = 0; i < matrixA.numCols; i++)
				sum += matrixA.elementMatrix[row][i] * matrixB.elementMatrix[i][col];

			this->elementMatrix[row][col] = sum;
		}
	}

	return true;
}

bool Matrix::Invert(const Matrix& matrix)
{
	if (matrix.numRows != matrix.numCols)
		return false;

	this->SetAsCopyOf(matrix);

	std::vector<std::shared_ptr<RowOperation>> rowOperationArray;
	this->PerformFullRowReduction(rowOperationArray);

	// Return false here if the square matrix was singular.
	for (int i = 0; i < matrix.numRows; i++)
		if (matrix.GetElement(i, i) == 0.0)		// STPTODO: Maybe use epsilon?
			return false;

	// We should already be the identity matrix at this point,
	// but set the identity here anyway to reduce round-off error.
	this->SetAsIdentityMatrix();

	this->ApplyRowOperations(rowOperationArray);

	return true;
}

bool Matrix::GetDeterminant(double& determinant) const
{
	if (this->numRows != this->numCols)
		return false;

	if (this->numRows == 1)
	{
		determinant = this->elementMatrix[0][0];
		return true;
	}

	determinant = 0.0;

	for (int col = 0; col < this->numCols; col++)
	{
		Matrix subMatrix;
		subMatrix.SetAsCofactorSubMatrixOf(*this, 0, col);

		double subDeterminant = 0.0;
		subMatrix.GetDeterminant(subDeterminant);

		if (col % 2 == 1)
			subDeterminant *= -1.0;

		determinant += this->elementMatrix[0][col] * subDeterminant;
	}

	return true;
}

void Matrix::PerformFullRowReduction(std::vector<std::shared_ptr<RowOperation>>& rowOperationArray)
{
#ifdef _DEBUG
	std::string debugMatStr;
#endif

	int pivotColumn = -1;

	for (int pivotRow = 0; pivotRow < this->numRows; pivotRow++)
	{
#ifdef _DEBUG
		debugMatStr = this->Print();
#endif

		// Find the pivot position.  We know that the pivot row is correct, but
		// we must advance the pivot column until we find non-zero elements anywhere
		// at or below it.  (Doesn't matter if non-zero elements occur above it.)
		pivotColumn++;
		bool foundNonZeroElement = false;
		while (pivotColumn < this->numCols)
		{
			for (int row = pivotRow; row < this->numRows && !foundNonZeroElement; row++)
				if (this->elementMatrix[row][pivotColumn] != 0.0)
					foundNonZeroElement = true;

			if (foundNonZeroElement)
				break;

			pivotColumn++;
		}

		// If we don't have a pivot position, then we're done.
		if (!foundNonZeroElement)
			break;

		// We now look for an entry in the pivot column (and below the pivot point!) of
		// largest absolute value, because this improves our numerical accuracy to have
		// it serve in the pivot position.
		int bestRow = pivotRow;
		double largestMag = 0.0;
		for (int row = pivotRow; row < this->numRows; row++)
		{
			double elementMag = ::fabs(this->elementMatrix[row][pivotColumn]);
			if (elementMag > largestMag)
			{
				largestMag = elementMag;
				bestRow = row;
			}
		}

		// If the said element is not already in the pivot position, get it there.
		if (bestRow != pivotRow)
		{
			std::shared_ptr<SwapRowsOperation> rowOp = std::make_shared<SwapRowsOperation>(bestRow, pivotRow);
			rowOp->Perform(*this);
			rowOperationArray.push_back(rowOp);
		}

#ifdef _DEBUG
		debugMatStr = this->Print();
#endif

		// We now want zeros above and below the pivot position.
		double pivotPositionElement = this->elementMatrix[pivotRow][pivotColumn];
		for (int row = 0; row < this->numRows; row++)
		{
			if (row == pivotRow)
				continue;

			if (this->elementMatrix[row][pivotColumn] == 0.0)
				continue;

			double scalar = -this->elementMatrix[row][pivotColumn] / pivotPositionElement;
			std::shared_ptr<AddRowMultipleOperation> rowOp = std::make_shared<AddRowMultipleOperation>(row, pivotRow, scalar);
			rowOp->Perform(*this);
			rowOperationArray.push_back(rowOp);

#ifdef _DEBUG
			debugMatStr = this->Print();
#endif
		}

		// Lastly, make sure we have a one in the pivot position.
		if (pivotPositionElement != 1.0)
		{
			std::shared_ptr<ScaleRowOperation> rowOp = std::make_shared<ScaleRowOperation>(pivotRow, 1.0 / pivotPositionElement);
			rowOp->Perform(*this);
			rowOperationArray.push_back(rowOp);
		}
	}
}

bool Matrix::ApplyRowOperations(const std::vector<std::shared_ptr<RowOperation>>& rowOperationArray)
{
	for (std::shared_ptr<RowOperation> rowOp : rowOperationArray)
		if (!rowOp->Perform(*this))
			return false;

	return true;
}

std::string Matrix::Print() const
{
	std::string matStr;

	for (int row = 0; row < this->numRows; row++)
	{
		for (int col = 0; col < this->numCols; col++)
		{
			matStr += std::format("{:.2f} ", this->elementMatrix[row][col]);
		}

		matStr += "\n";
	}

	return matStr;
}

//------------------------------ Matrix::RowOperation ------------------------------

Matrix::RowOperation::RowOperation()
{
}

/*virtual*/ Matrix::RowOperation::~RowOperation()
{
}

//------------------------------ Matrix::ScaleRowOperation ------------------------------

Matrix::ScaleRowOperation::ScaleRowOperation(int row, double scalar)
{
	this->row = row;
	this->scalar = scalar;
}

/*virtual*/ Matrix::ScaleRowOperation::~ScaleRowOperation()
{
}

/*virtual*/ bool Matrix::ScaleRowOperation::Perform(Matrix& matrix)
{
	if (this->row < 0 || this->row >= matrix.numRows)
		return false;

	for (int col = 0; col < matrix.numCols; col++)
		matrix.elementMatrix[this->row][col] *= this->scalar;

	return true;
}

//------------------------------ Matrix::ScaleRowOperation ------------------------------

Matrix::SwapRowsOperation::SwapRowsOperation(int rowA, int rowB)
{
	this->rowA = rowA;
	this->rowB = rowB;
}

/*virtual*/ Matrix::SwapRowsOperation::~SwapRowsOperation()
{
}

/*virtual*/ bool Matrix::SwapRowsOperation::Perform(Matrix& matrix)
{
	if (this->rowA < 0 || this->rowA >= matrix.numRows)
		return false;

	if (this->rowB < 0 || this->rowB >= matrix.numRows)
		return false;

	for (int col = 0; col < matrix.numCols; col++)
	{
		double element = matrix.elementMatrix[this->rowA][col];
		matrix.elementMatrix[this->rowA][col] = matrix.elementMatrix[this->rowB][col];
		matrix.elementMatrix[this->rowB][col] = element;
	}

	return true;
}

//------------------------------ Matrix::AddRowMultipleOperation ------------------------------

Matrix::AddRowMultipleOperation::AddRowMultipleOperation(int rowA, int rowB, double scalar)
{
	this->rowA = rowA;
	this->rowB = rowB;
	this->scalar = scalar;
}

/*virtual*/ Matrix::AddRowMultipleOperation::~AddRowMultipleOperation()
{
}

/*virtual*/ bool Matrix::AddRowMultipleOperation::Perform(Matrix& matrix)
{
	if (this->rowA < 0 || this->rowA >= matrix.numRows)
		return false;

	if (this->rowB < 0 || this->rowB >= matrix.numRows)
		return false;

	for (int col = 0; col < matrix.numCols; col++)
		matrix.elementMatrix[this->rowA][col] += matrix.elementMatrix[this->rowB][col] * this->scalar;

	return true;
}