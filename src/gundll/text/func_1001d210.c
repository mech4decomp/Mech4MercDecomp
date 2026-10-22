/* src/modules/gundll/objects/func_1001d210.c — FUN_1001d210 (70 B) __stdcall, RET 0x8. */

extern void __stdcall FUN_1001d210(void);
extern void __cdecl FUN_1001d130(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001d210(void)
{
    __asm {
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        xor     ebx, ebx
        cmp     esi, ebx
        jz      L1
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    edi
    L2:
        mov     eax, dword ptr [esi + 0x1c]
        cmp     eax, ebx
        jz      L3
        push    eax
        push    ebp
        call    FUN_1001d210
        mov     dword ptr [esi + 0x1c], ebx
    L3:
        mov     edi, dword ptr [esi + 0x18]
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], ebx
        call    FUN_1001d130
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        cmp     edi, ebx
        mov     esi, edi
        jnz     L2
        pop     edi
        pop     ebp
    L1:
        pop     esi
        pop     ebx
        ret     0x8
    }
}
