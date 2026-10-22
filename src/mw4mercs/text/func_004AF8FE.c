/*
 * FUN_004AF8FE (164 B @ 0x4AF8FE) - __thiscall (ECX = this). MLR object
 * constructor: loads a global, calls FUN_004C6430, zeroes several fields,
 * then indexes several lookup tables (0x7B3270, 0x7B3B28/2C/30, 0x7B3370)
 * derived from bits of this->[0x18], copies a 0xC-dword table from 0x7B9460
 * into this->[0x154], and installs vtable 0x77058C.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   dword_7DA9F4;
extern void  __cdecl FUN_004C6430(void);
extern int   dword_7B3270[];
extern int   dword_7B3B28[];
extern int   dword_7B3B2C[];
extern int   dword_7B3B30[];
extern int   dword_7B3370[];
extern int   dword_7B9460[];

__declspec(naked) void FUN_004AF8FE(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [dword_7DA9F4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004C6430
        xor     eax, eax
        mov     dword ptr [ebx + 0x14c], eax
        mov     dword ptr [ebx + 0x150], eax
        mov     dword ptr [ebx + 0x184], eax
        mov     dword ptr [ebx + 0x188], eax
        mov     eax, dword ptr [ebx + 0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + dword_7B3270]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*2]
        shl     ecx, 2
        mov     dword ptr [ebx + 0x1c], edx
        mov     edx, dword ptr [ecx + dword_7B3B28]
        mov     dword ptr [ebx + 0x130], edx
        mov     edx, dword ptr [ecx + dword_7B3B2C]
        mov     ecx, dword ptr [ecx + dword_7B3B30]
        mov     dword ptr [ebx + 0x138], ecx
        shr     eax, 0xa
        lea     edi, [ebx + 0x154]
        mov     dword ptr [ebx], 0x77058c
        mov     ecx, 0xc
        mov     esi, OFFSET dword_7B9460
        and     eax, 1
        rep movsd
        mov     dword ptr [ebx + 0x134], edx
        mov     edx, dword ptr [eax*4 + dword_7B3370]
        pop     edi
        pop     esi
        mov     dword ptr [ebx + 0x13c], edx
        mov     eax, ebx
        pop     ebx
        ret
    }
}
