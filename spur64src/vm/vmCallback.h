/* Automatically generated by
	CCodeGeneratorGlobalStructure * VMMaker-CompatibleUserName.1577968628 uuid: d729bf66-2ea7-5a6d-b1eb-fc005785636d
 */

#define VM_CALLBACK_INC 1

typedef struct _VMCallbackContext {
	void *thunkp;
	sqIntptr_t *stackp;
	sqIntptr_t *intregargsp;
	double *floatregargsp;
	void *savedCStackPointer;
	void *savedCFramePointer;
	union {
								sqIntptr_t valword;
								struct { int low, high; } valleint64;
								struct { int high, low; } valbeint64;
								double valflt64;
								struct { void *addr; sqIntptr_t size; } valstruct;
							}	rvs;
	void *savedPrimFunctionPointer;
	jmp_buf	trampoline;
	jmp_buf	savedReenterInterpreter;
 } VMCallbackContext;

/* The callback return type codes */
#define retword 1
#define retword64 2
#define retdouble 3
#define retstruct 4


