/* auto-transcribed gap function 0x1001F360 (64 B); review against reference; stepping stone */
extern void __cdecl FUN_10003000(void);
extern void __cdecl FUN_10003300(void);
extern void __cdecl FUN_10003420(void);
extern void __cdecl FUN_10003560(void);
extern void __cdecl FUN_1001edfe(void);
extern int g_10021f20;
__declspec(naked) void FUN_1001f360(void)
{
    __asm {
            lea ecx, [ebp - 0x340]
            jmp FUN_10003000
            lea ecx, [ebp - 0x378]
            jmp FUN_10003300
            lea ecx, [ebp - 0x288]
            jmp FUN_10003420
            lea ecx, [ebp - 0x248]
            jmp FUN_10003560
            mov eax, offset g_10021f20
            jmp FUN_1001edfe
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
            int 3
    }
}
