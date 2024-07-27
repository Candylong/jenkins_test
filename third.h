#ifdef USE_DYNAMIC_DLL
#define DLL_EXPORT __declspec(dllimport)
#else
#define DLL_EXPORT __declspec(dllexport)
#endif

#ifdef __cplusplus
extern "C" {
#endif
int Sum(int a, int b);
int Mutiplay(int a, int b);
int Dec(int a, int b);

#ifdef __cplusplus
}
#endif