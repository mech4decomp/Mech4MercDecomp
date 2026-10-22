/*
 * FUN_10030fd0 (128 B) — __stdcall, RET 0x10.
 * Allocates 0x58-byte object via FUN_10001d50, constructs via thiscall
 * FUN_1002f850, dispatches through vtable+0x48, frees on failure.
 * Writes result through param_1.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);
extern void __cdecl FUN_10001d60(void);
extern void FUN_1002f850(void);   /* __thiscall (ECX=this) */
extern void FUN_1002f920(void);   /* __thiscall (ECX=this) */

__declspec(naked) void __stdcall FUN_10030fd0(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        xor     esi, esi
        test    edi, edi
        jz      loc_1049
        mov     ebx, dword ptr [esp + 0x1c]
        test    ebx, ebx
        jz      loc_1049
        test    ebp, ebp
        jz      loc_1049
        push    0x58
        call    FUN_10001d50
        add     esp, 0x4
        test    eax, eax
        jz      loc_100e
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    ebx
        push    edi
        mov     ecx, eax
        call    FUN_1002f850
        mov     esi, eax
        jmp     loc_1010
    loc_100e:
        xor     esi, esi
    loc_1010:
        test    esi, esi
        jnz     loc_101b
        mov     edi, 0x8007000e
        jmp     loc_1039
    loc_101b:
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x48]
        mov     edi, eax
        test    edi, edi
        jge     loc_1039
        mov     ecx, esi
        call    FUN_1002f920
        push    esi
        call    FUN_10001d60
        add     esp, 0x4
        xor     esi, esi
    loc_1039:
        test    ebp, ebp
        mov     eax, edi
        jz      loc_1042
        mov     dword ptr [ebp], esi
    loc_1042:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x10
    loc_1049:
        mov     edi, 0x80070057
        jmp     loc_1039
    }
}
