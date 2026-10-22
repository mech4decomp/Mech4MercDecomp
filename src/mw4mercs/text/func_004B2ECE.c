/*
 * FUN_004B2ECE (165 B) — constructor: initializes a table object, sets its
 * vtable, and fills several fields from lookup tables indexed by a value.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b3378[];
extern int g_7b3b28[];
extern int g_7b3b2c[];
extern int g_7b3b30[];
extern int g_7b3478[];
extern void __cdecl FUN_004C6430(void);

__declspec(naked) void FUN_004B2ECE(void)
{
    __asm {
        nop
        nop
        mov     eax, dword ptr [esp+4]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004C6430
        xor     eax, eax
        mov     dword ptr [ebx+0x174], eax
        mov     dword ptr [ebx+0x178], eax
        mov     dword ptr [ebx+0x17c], eax
        mov     dword ptr [ebx+0x180], eax
        mov     eax, dword ptr [ebx+0x18]
        mov     ecx, eax
        shr     ecx, 2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + g_7b3378]
        mov     ecx, eax
        shr     ecx, 5
        and     ecx, 0x1f
        lea     ecx, [ecx+ecx*2]
        shl     ecx, 2
        mov     dword ptr [ebx+0x1c], edx
        mov     edx, dword ptr [ecx + g_7b3b28]
        mov     dword ptr [ebx+0x130], edx
        mov     edx, dword ptr [ecx + g_7b3b2c]
        mov     ecx, dword ptr [ecx + g_7b3b30]
        mov     dword ptr [ebx+0x138], ecx
        shr     eax, 0xa
        lea     edi, [ebx+0x144]
        mov     dword ptr [ebx], 0x77066c
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        and     eax, 1
        rep movsd
        mov     dword ptr [ebx+0x134], edx
        mov     edx, dword ptr [eax*4 + g_7b3478]
        pop     edi
        pop     esi
        mov     dword ptr [ebx+0x13c], edx
        mov     eax, ebx
        pop     ebx
        ret     4
    }
}
