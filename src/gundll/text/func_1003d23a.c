/* src/modules/gundll/crt/func_1003d23a.c — FUN_1003d23a (72 B) __cdecl. */

extern int g_10076a90;
extern void* g_10049074;
extern int g_1007685c;
extern int g_10076854;
extern int g_10076858;
extern int g_1007684c;
extern int g_10076860;
extern int g_10076844;

__declspec(naked) void FUN_1003d23a(void)
{
    __asm {
        push    0x140
        push    0x0
        push    dword ptr [g_10076a90]
        call    dword ptr [g_10049074]
        test    eax, eax
        mov     dword ptr [g_1007685c], eax
        jnz     L1
        ret
    L1:
        mov     ecx, dword ptr [esp + 0x4]
        and     dword ptr [g_10076854], 0x0
        and     dword ptr [g_10076858], 0x0
        push    0x1
        mov     dword ptr [g_1007684c], eax
        mov     dword ptr [g_10076860], ecx
        mov     dword ptr [g_10076844], 0x10
        pop     eax
        ret
    }
}
