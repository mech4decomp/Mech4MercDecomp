/*
 * FUN_006cb0e0 (67 B) — __thiscall constructor, RET 0x10 (four stack
 * params).
 *
 * Calls FUN_006c8950(param_1, 1) on this, initializes fields +0x28,
 * +0x2c, +0x38, +0x39, +0x3a, sets vtable at [this]=0x79e29c, and if
 * param_4 != 0 calls FUN_006cb160(). Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_006c8950(void);
extern void FUN_006cb160(void);

__declspec(naked) void *FUN_006cb0e0(void *param_1, void *param_2,
                                     void *param_3, char param_4)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    0x1
        mov     esi, ecx
        push    eax
        call    FUN_006c8950
        mov     ecx, dword ptr [esp + 0xc]
        mov     al, byte ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [esi + 0x28], ecx
        xor     cl, cl
        cmp     al, cl
        mov     dword ptr [esi], 0x79e29c
        mov     dword ptr [esi + 0x2c], edx
        mov     byte ptr [esi + 0x38], cl
        mov     byte ptr [esi + 0x39], cl
        mov     byte ptr [esi + 0x3a], al
        jz      short loc_6cb11d
        mov     ecx, esi
        call    FUN_006cb160
loc_6cb11d:
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
