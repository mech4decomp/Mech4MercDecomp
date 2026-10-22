/*
 * FUN_005a0320 (197 B) — Initializes joint lookup table.
 * Calls FUN_005f8fa0 (joint lookup by name) for 5 joints,
 * sets a validity flag if all found, zeroes remaining fields.
 *
 * __fastcall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_005f8fa0(void *this, const char *name);

__declspec(naked) void __fastcall FUN_005a0320(int this)
{
    __asm {
        push    esi
        mov     esi, ecx

        push    0x783c84          /* "joint_DoorAR" */
        mov     byte ptr [esi + 0x55d], 1
        call    FUN_005f8fa0
        push    0x783c74          /* "joint_DoorAL" */
        mov     ecx, esi
        mov     dword ptr [esi + 0x548], eax
        call    FUN_005f8fa0
        push    0x783c64          /* "joint_DoorFR" */
        mov     ecx, esi
        mov     dword ptr [esi + 0x54c], eax
        call    FUN_005f8fa0
        push    0x783c54          /* "joint_DoorFL" */
        mov     ecx, esi
        mov     dword ptr [esi + 0x550], eax
        call    FUN_005f8fa0
        push    0x783c48          /* "joint_Lift" */
        mov     ecx, esi
        mov     dword ptr [esi + 0x554], eax
        call    FUN_005f8fa0

        mov     edx, dword ptr [esi + 0x548]
        xor     ecx, ecx
        cmp     edx, ecx
        mov     dword ptr [esi + 0x558], eax
        mov     byte ptr [esi + 0x55c], cl
        jz      done_check
        cmp     dword ptr [esi + 0x54c], ecx
        jz      done_check
        cmp     dword ptr [esi + 0x550], ecx
        jz      done_check
        cmp     dword ptr [esi + 0x554], ecx
        jz      done_check
        cmp     eax, ecx
        jz      done_check
        mov     byte ptr [esi + 0x55c], 1

done_check:
        mov     dword ptr [esi + 0x560], ecx
        mov     dword ptr [esi + 0x564], ecx
        mov     dword ptr [esi + 0x568], ecx
        mov     dword ptr [esi + 0x56c], ecx
        mov     dword ptr [esi + 0x570], ecx
        mov     dword ptr [esi + 0x544], ecx
        mov     dword ptr [esi + 0x540], ecx

        pop     esi
        ret     4
    }
}
