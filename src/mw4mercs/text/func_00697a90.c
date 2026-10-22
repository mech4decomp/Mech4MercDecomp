/*
 * FUN_00697a90 (89 B) — __thiscall (ECX = this), RET 0x8 (2 stack params).
 * Stores param1 at this+0x88, then conditionally reinitializes a sub-object
 * at this+0x8C and dispatches based on param1/param2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_00697af0(void);
extern void __stdcall FUN_0041fcd0(int param);

__declspec(naked) void __stdcall FUN_00697a90(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x8c]
        mov     ecx, edi
        mov     dword ptr [esi + 0x88], ebp
        call    FUN_0041fd80
        mov     ebx, dword ptr [esp + 0x18]
        cmp     ebx, eax
        jz      L_end
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_cmp
        mov     ecx, edi
        call    FUN_0041fcb0
L_cmp:
        cmp     ebp, -0x1
        jnz     L_call
        mov     ecx, esi
        call    FUN_00697af0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L_call:
        push    ebx
        mov     ecx, edi
        call    FUN_0041fcd0
L_end:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
