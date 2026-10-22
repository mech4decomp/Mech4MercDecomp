/*
 * FUN_004C653C (363 B, __thiscall RET 8) - in-.text data block transcription
 * (wave U). Object constructor: initializes vtable + fields, copies several
 * 0x30-byte blocks from a source object, copies a 0x30-byte table from
 * 0x7B9460, optionally allocates a sub-object (FUN_00416110/FUN_00491280),
 * and computes a lookup into the 0x7B3A28/0x7B3B28 tables.
 *
 * Match: target 100%
 */

#pragma warning(disable : 4035 4793)

extern int  g_007b8d68;
extern int  g_007b8d70;
extern int  g_007b8d6c;
extern int  g_007daa38;
extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00491280(void);

__declspec(naked) void FUN_004C653C(void)
{
    __asm {
        nop
        nop
        nop
        nop
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00415180
        mov     ebp, dword ptr [esp + 0x18]
        xor     eax, eax
        lea     esi, [ebp + 0xb0]
        lea     edi, [ebx + 0xb0]
        push    esi
        mov     ecx, edi
        mov     dword ptr [ebx + 8], eax
        mov     dword ptr [ebx + 0xc], eax
        mov     dword ptr [ebx], 0x76cd9c
        mov     dword ptr [ebx + 0x14], eax
        mov     dword ptr [ebx + 0x10], eax
        call    FUN_00419460
        lea     ecx, [esi + 0x30]
        push    ecx
        lea     ecx, [edi + 0x30]
        call    FUN_0040c410
        mov     edx, dword ptr [esi + 0x3c]
        mov     eax, dword ptr [g_007b8d68]
        mov     dword ptr [edi + 0x3c], edx
        mov     edx, dword ptr [g_007b8d70]
        lea     edi, [ebx + 0xf0]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        rep movsd
        mov     ecx, dword ptr [g_007b8d6c]
        mov     dword ptr [ebx + 0x124], ecx
        mov     dword ptr [ebx + 0x120], eax
        mov     dword ptr [ebx + 0x128], edx
        lea     esi, [ebp + 0x20]
        lea     edi, [ebx + 0x20]
        mov     ecx, 0xc
        rep movsd
        lea     esi, [ebp + 0x50]
        lea     edi, [ebx + 0x50]
        mov     ecx, 0xc
        rep movsd
        lea     esi, [ebp + 0x80]
        lea     edi, [ebx + 0x80]
        mov     ecx, 0xc
        rep movsd
        mov     esi, dword ptr [ebp + 0x140]
        test    esi, esi
        mov     dword ptr [ebx + 0x12c], 0xbf800000
        je      L4c6644
        mov     ecx, dword ptr [g_007daa38]
        call    FUN_00416110
        mov     edi, eax
        test    edi, edi
        mov     dword ptr [esp + 0x14], edi
        je      L4c663a
        mov     ecx, edi
        call    FUN_00491280
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, 6
        rep movsd
        mov     dword ptr [eax + 0x18], 0
        mov     dword ptr [ebx + 0x140], eax
        jmp     L4c664e
    L4c663a:
        xor     eax, eax
        mov     dword ptr [ebx + 0x140], eax
        jmp     L4c664e
    L4c6644:
        mov     dword ptr [ebx + 0x140], 0
    L4c664e:
        mov     eax, dword ptr [ebp + 0x18]
        and     eax, 0xffffff3f
        or      eax, 4
        mov     dword ptr [ebx + 0x18], eax
        mov     ecx, eax
        shr     eax, 5
        and     eax, 0x1f
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + 0x7b3a28]
        lea     eax, [eax + eax*2]
        shl     eax, 2
        mov     ecx, dword ptr [eax + 0x7b3b28]
        pop     edi
        mov     dword ptr [ebx + 0x1c], edx
        mov     edx, dword ptr [eax + 0x7b3b2c]
        mov     eax, dword ptr [eax + 0x7b3b30]
        pop     esi
        mov     dword ptr [ebx + 0x138], eax
        pop     ebp
        mov     dword ptr [ebx + 0x130], ecx
        mov     dword ptr [ebx + 0x134], edx
        mov     eax, ebx
        pop     ebx
        ret     8
    }
}
