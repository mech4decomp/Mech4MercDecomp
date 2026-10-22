/*
 * FUN_0069A830 (44 B) — __stdcall (RET 0x4). If [this+0x10] nonzero, call
 * FUN_00624b80([this+0x10], [this+0x18]-[this+0x10]); then free this via
 * FUN_004084e0 if non-null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00624b80(void *a, int b);
extern void __cdecl FUN_004084e0(void *a);

__declspec(naked) void FUN_0069a830(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      L_free
        mov     ecx, dword ptr [esi + 0x18]
        sub     ecx, eax
        push    ecx
        push    eax
        call    FUN_00624b80
        add     esp, 0x8
    L_free:
        test    esi, esi
        jz      L_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_done:
        pop     esi
        ret     0x4
    }
}
