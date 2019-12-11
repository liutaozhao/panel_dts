
#define DECL_INTERFACE_NAME(class)  public: \
                                        static const char* Name() \
                                        { \
                                            return #class; \
                                        }; \
                                        const char* GetName() const { return Name(); };

class APC
{
 DECL_INTERFACE_NAME(APC);
};

int main(void)
{
	return 0;
}
