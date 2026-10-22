/*
 * FUN_1001c660 (52 B) — __cdecl.
 * Calls FUN_100380d2(arg1,arg2,arg4,&stack); on failure return
 * 0xc1120002, else store result into arg3 and return 0.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100380d2(void);

__declspec(naked) void __cdecl FUN_1001c660(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        push    ecx
        push    edx
        push    eax
        xor     esi, esi
        call    FUN_100380d2
        add     esp, 0x10
        test    eax, eax
        jge     L1
        mov     eax, 0xc1120002
        pop     esi
        ret
    L1:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [ecx], eax
        mov     eax, esi
        pop     esi
        ret
    }
}
