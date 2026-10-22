/* auto-transcribed 0x5E033831 (46 B) */
extern int  g_5e77abc8;
extern void __cdecl FUN_5e02c830(void);
extern void __cdecl FUN_5e02c891(void);
extern void __cdecl FUN_5e033875(void);

__declspec(naked) void FUN_5e033831(void)
{
    __asm {
            cmp dword ptr [g_5e77abc8], 0x0
            jnz L85e
            push 0xb
            call FUN_5e02c830
            cmp dword ptr [g_5e77abc8], 0x0
            pop ecx
            jnz L856
            call FUN_5e033875
            inc dword ptr [g_5e77abc8]
L856:
            push 0xb
            call FUN_5e02c891
            pop ecx
L85e:
            ret
    }
}
