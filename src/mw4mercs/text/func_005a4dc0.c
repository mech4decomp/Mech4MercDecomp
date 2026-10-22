/*
 * FUN_005a4dc0 (105 B) — __thiscall initialization of a 11-entry table.
 *
 * Fills [this+0x514] with 0xFFFFFFFF (11 dwords), then loops calling
 * FUN_00416b60 for each index to populate entries.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00416b60(int *pIndex);

void __declspec(naked) __stdcall FUN_005a4dc0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        push    edi
        mov     ecx, 0xb
        or      eax, 0xffffffff
        lea     edi, [esi + 0x514]
        rep stosd
        mov     dword ptr [esp + 0x8], 0x0
        lea     edi, [esi + 0x370]
loop_start:
        lea     eax, [esp + 0x8]
        push    eax
        mov     ecx, edi
        call    FUN_00416b60
        test    eax, eax
        jz      store_fail
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [eax + 0x44]
        lea     ecx, [esi + ecx*0x4 + 0x514]
        mov     dword ptr [ecx], edx
        mov     dword ptr [eax + 0x38], ecx
        jmp     check_loop
store_fail:
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [esi + eax*0x4 + 0x514], 0xffffffff
check_loop:
        mov     eax, dword ptr [esp + 0x8]
        inc     eax
        cmp     eax, 0xb
        mov     dword ptr [esp + 0x8], eax
        jl      loop_start
        pop     edi
        pop     esi
        pop     ecx
        ret
    }
}
