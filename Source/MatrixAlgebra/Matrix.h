#pragma once

#include <vector>
#include <memory>
#include <string>

namespace MatrixAlgebra
{
	/**
	 * These are MxN matrices with real-valued elements.
	 */
	class Matrix
	{
	public:
		class RowOperation;

		friend class ScaleRowOperation;
		friend class SwapRowsOperation;
		friend class AddRowMultipleOperation;

		/**
		 * Construct a matrix with the given number of rows and columns.
		 */
		Matrix(int numRows = 0, int numCols = 0);

		/**
		 * Construct a copy of the given matrix.
		 */
		Matrix(const Matrix& matrix);

		/**
		 * 
		 */
		virtual ~Matrix();

		/**
		 * Set the dimensions of this matrix.
		 * 
		 * @param[in] numRows Specify the number of rows in the matrix.
		 * @param[in] numCols Specify the number of columns in the matrix.
		 * @return False is returned here if the dimensions don't make sense.
		 */
		bool SetSize(int numRows, int numCols);

		/**
		 * Get the dimensions of this matrix.
		 * 
		 * @param[out] numRows The number of rows in this matrix is returned here.
		 * @param[out] numCols The number of columns in this matrix is returned here.
		 */
		void GetSize(int& numRows, int& numCols) const;

		/**
		 * Return the number of rows in this matrix.
		 */
		int GetNumRows() const;

		/**
		 * Return the number of columns in this matrix.
		 */
		int GetNumCols() const;

		/**
		 * Tell the caller if the given location exists within this matrix.
		 */
		bool LocationInBounds(int row, int col) const;

		/**
		 * Tell the caller if this matrix as the same size as the given matrix.
		 */
		bool HasSameDimensionsAs(const Matrix& matrix) const;

		/**
		 * Assign zero to all elements of this matrix.
		 */
		void SetAsZeroMatrix();

		/**
		 * Assign zero to all non-diagonal elements, and one to all diagonal elements.
		 * 
		 * @return False is returned here if the matrix is not square.
		 */
		bool SetAsIdentityMatrix();

		/**
		 * Make this matrix a copy of the given matrix.  This matrix's dimensions are adjusted to match, if necessary.
		 */
		void SetAsCopyOf(const Matrix& matrix);

		/**
		 * Assign this matrix as the sub-matrix of the given matrix at the specified sub-region.
		 * 
		 * @return False is returned here if the given sub-region is out of bounds.
		 */
		bool SetAsSubMatrixOf(const Matrix& matrix, int firstRow, int lastRow, int firstCol, int lastCol);

		/**
		 * Assign this matrix as a copy of this matrix with the given row and column knocked out.
		 * 
		 * @return FAlse is returned here if the given row or column is out of bounds.
		 */
		bool SetAsCofactorSubMatrixOf(const Matrix& matrix, int excludedRow, int excludedCol);

		/**
		 * Return the element of this matrix at the given location.
		 * 
		 * @param[in] row This is the row of the desired element.
		 * @param[in] col This is the column of the desired element.
		 * @param[out] element The desired element is returned here.
		 * @return False is returned here if the given location is out of bounds.
		 */
		bool GetElement(int row, int col, double& element) const;

		/**
		 * Return the element of this matrix at the given location.
		 * 
		 * @param[in] row This is the row of the desired element.
		 * @param[in] col This is the column of the desired element.
		 * @return The desired element is returned or zero if the location is out of bounds.
		 */
		double GetElement(int row, int col) const;

		/**
		 * Assign the given element to this matrix at the given location.
		 * 
		 * @param[in] row This is the row of the target element.
		 * @param[in] col This is the column of the target element.
		 * @param[in] element This is the element to set at the target location.
		 * @return False is returned here if the given location is out of bounds.
		 */
		bool SetElement(int row, int col, double element);

		/**
		 * Assign to this matrix the sum of the two given matrices.
		 * 
		 * @param[in] matrixA This is the first of the two matrices to be added.
		 * @param[in] matrixB This is the second of the two matrices to be added.
		 * @return False is returned here if the dimensions of the given matrices don't match the dimensions of this matrix.
		 */
		bool Add(const Matrix& matrixA, const Matrix& matrixB);

		/**
		 * Assign to this matrix the difference between the two given matrices.
		 *
		 * @param[in] matrixA This is the first of the two matrices to be subtracted
		 * @param[in] matrixB This, the second matrix, is subtracted from the first.
		 * @return False is returned here if the dimensions of the given matrices don't match the dimensions of this matrix.
		 */
		bool Subtract(const Matrix& matrixA, const Matrix& matrixB);

		/**
		 * Assign to this matrix the product of the two given matrices in the given order.
		 * Note, of course, that matrix multiplication does not commute.
		 * 
		 * @param[in] matrixA This is the matrix multiplied on the left.
		 * @param[in] matrixB This is the matrix multiplied on the right.
		 * @return False is returned here if the dimensions of all matrices concerned don't properly lend themselves to a matrix multiply operation.
		 */
		bool Multiply(const Matrix& matrixA, const Matrix& matrixB);

		/**
		 * Assign to this matrix the multiplicative inverse of the given matrix.
		 * 
		 * @param[in] matrix This is the matrix whose inverse we seek.
		 * @return False is returned here if the given matrix is singular or non-square.
		 */
		bool Invert(const Matrix& matrix);

		// STPTODO: Can we support the psuedo-inverse of non-square matrices?

		/**
		 * Calculate and return the determinant of this matrix.
		 * 
		 * @return False is returned here if this matrix is non-square.
		 */
		bool GetDeterminant(double& determinant) const;

		/**
		 * Perform Gaussian elimination on this matrix.
		 * 
		 * @param[out] rowOperationArray The row operations performed in the reduction process are returned here.
		 */
		void PerformFullRowReduction(std::vector<std::shared_ptr<RowOperation>>& rowOperationArray);

		/**
		 * Apply the given set of row operation, in order, to this matrix.
		 * 
		 * @param[in] rowOperationArray These are the operations to perform.  They are typically generated by the @ref PerformFullRowReduction method.
		 * @return False is returned here if not all given row operations could be performed.
		 */
		bool ApplyRowOperations(const std::vector<std::shared_ptr<RowOperation>>& rowOperationArray);

		/**
		 * Return a human-readable string showing the content of the matrix.
		 */
		std::string Print() const;

		/**
		 * This is the base class for any row operation we can perform on a matrix.
		 */
		class RowOperation
		{
		public:
			RowOperation();
			virtual ~RowOperation();

			/**
			 * Derivatives of this class must override this method to
			 * perform the represented operation.  Success is indicated
			 * by the return value.
			 */
			virtual bool Perform(Matrix& matrix) = 0;
		};

		/**
		 * Scale a matrix's row by the given scalar.
		 */
		class ScaleRowOperation : public RowOperation
		{
		public:
			ScaleRowOperation(int row, double scalar);
			virtual ~ScaleRowOperation();

			virtual bool Perform(Matrix& matrix) override;

		private:
			int row;
			double scalar;
		};

		/**
		 * Swap two rows of a matrix.
		 */
		class SwapRowsOperation : public RowOperation
		{
		public:
			SwapRowsOperation(int rowA, int rowB);
			virtual ~SwapRowsOperation();

			virtual bool Perform(Matrix& matrix) override;

		private:
			int rowA, rowB;
		};

		/**
		 * Add a multiple of one row to another in a matrix.
		 */
		class AddRowMultipleOperation : public RowOperation
		{
		public:
			AddRowMultipleOperation(int rowA, int rowB, double scalar);
			virtual ~AddRowMultipleOperation();

			virtual bool Perform(Matrix& matrix) override;

		private:
			int rowA, rowB;
			double scalar;
		};

	protected:

		int numRows, numCols;
		double** elementMatrix;
	};

	/**
	 * This function can be used to invert a GA element with respect to the geometric product.
	 * 
	 * @param[in] gaElement This is the GA element (vector, bivector, etc.) whose inverse we seek.
	 * @param[out] gaElementInverted The inverse of the given GA element, if it exists, is returned here.
	 * @return False is returned if the given GA element had no multiplicative inverse with respect to the geometric product.
	 */
	template<typename T>
	bool InvertGAElement(const T& gaElement, T& gaElementInverted)
	{
		int numRows = 0;
		int numCols = 0;

		gaElement.GetMatrixSize(numRows, numCols);

		if (numRows < numCols)
			return false;

		Matrix matrix;
		matrix.SetSize(numRows, numCols);

		gaElement.ToSquareMatrix([&matrix](int row, int col, double element) -> void
			{
				matrix.SetElement(row, col, element);
			});

		// The sequence of row operations returned here is effective a left-inverse of the possibly non-square matrix.
		std::vector<std::shared_ptr<Matrix::RowOperation>> rowOperationArray;
		matrix.PerformFullRowReduction(rowOperationArray);

		// Check for no inverse.
		for (int i = 0; i < numCols; i++)
			if (matrix.GetElement(i, i) == 0.0)		// STPTODO: Use epsilon here?
				return false;

		Matrix solutionMatrix(numRows, 1);
		for (int i = 0; i < numRows; i++)
			solutionMatrix.SetElement(i, 0, ((i == 0) ? 1.0 : 0.0));

		solutionMatrix.ApplyRowOperations(rowOperationArray);

		gaElementInverted.FromColumnMatrix([&solutionMatrix](int row, double& element) -> void
			{
				solutionMatrix.GetElement(row, 0, element);
			});

		return true;
	}
}