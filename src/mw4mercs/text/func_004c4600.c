/*
 * FUN_004C4600 (51 B) — Thiscall state reset with vtable dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004154d0(void *this, void *param);

__declspec(naked) void FUN_004c4600(int param_1)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 8]

        add     ecx, 0x144
        push    ecx
        mov     ecx, esi
        call    FUN_004154d0

        and     dword ptr [esi + 0x18], 0xffffff3f

        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi + 0x10], 0
        call    dword ptr [eax + 0x10]

        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x14]

        pop     esi
        ret     4
    }
}
