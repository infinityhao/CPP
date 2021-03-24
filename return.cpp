class myclass {
public:
	// Return by pointer needs const and non-const versions
	myclass* ReturnPointerToCurrentObject() { return this; }
	const myclass* ReturnPointerToCurrentObject() const { return this; }

	// Return by reference needs const and non-const versions
	myclass& ReturnReferenceToCurrentObject() { return *this; }
	const myclass& ReturnReferenceToCurrentObject() const { return *this; }

	// Return by value only needs one version.
	myclass ReturnCopyOfCurrentObject() const { return *this; }
};