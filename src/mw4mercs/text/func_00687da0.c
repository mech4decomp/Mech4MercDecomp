/*
 * FUN_00687da0 (67 B) — __thiscall constructor.
 *
 * Initializes a 3-field structure (this/this+4/this+8) and a byte at
 * this+8. If param_1 != 0, allocates param_1*0xc bytes via FUN_004084d0()
 * and sets up the begin/end pointers. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void * __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_00687da0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dl, byte ptr [ecx]
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        cmp     edi, eax
        mov     dword ptr [esi], eax
        mov     byte ptr [esi + 0x8], dl
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        jz      L_skip
        lea     eax, [edi + edi*0x2]
        shl     eax, 0x2
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
    L_skip:
        lea     ecx, [edi + edi*0x2]
        lea     edx, [eax + ecx*0x4]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x4], eax
        pop     edi
        mov     dword ptr [esi + 0x8], edx
        mov     eax, esi
        pop     esi
        ret     0x8
    }
}
