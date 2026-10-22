/*
 * FUN_004C27B0 (223 B true extent; 224 B slice incl. trailing NOP) —
 * in-.text data block function (block 0x4C266B). Calls FUN_00491280 /
 * FUN_00491670 / FUN_004c8460 / FUN_0048bca0 / FUN_004c28d0 /
 * FUN_0048ca40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004c8460(void);
extern void __cdecl FUN_0048bca0(void);
extern void __cdecl FUN_004c28d0(void);
extern void __cdecl FUN_0048ca40(void);

extern char g_7dab08[];   /* object @ 0x7dab08 */

__declspec(naked) void FUN_004C27B0(void)
{
    __asm {
        sub     esp, 0x8c
        push    ebx
        push    esi
        mov     ebx, ecx
        push    edi
        lea     ecx, [esp + 0x40]
        call    FUN_00491280
        mov     esi, dword ptr [ebx + 0x140]
        mov     edi, dword ptr [esp + 0xa0]
        push    esi
        push    edi
        lea     ecx, [esp + 0x48]
        mov     dword ptr [esp + 0x60], 0
        call    FUN_00491670
        add     esi, 0x18
        push    esi
        add     edi, 0x18
        lea     eax, [esp + 0x5c]
        push    edi
        push    eax
        call    FUN_004c8460
        add     esp, 0xc
        lea     ecx, [esp + 0xc]
        call    FUN_0048bca0
        mov     ecx, dword ptr [ebx + 0x174]
        mov     edx, dword ptr [esp + 0xa4]
        mov     dword ptr [esp + 0xc], ecx
        and     edx, 0x3f
        mov     dword ptr [esp + 0x28], edx
        lea     ecx, [ebx + 0x144]
        mov     dword ptr [esp + 0x30], ecx
        lea     eax, [ebx + 0x80]
        mov     dword ptr [esp + 0x2c], eax
        lea     edx, [esp + 0x58]
        mov     ecx, 6
        lea     esi, [esp + 0x40]
        lea     edi, [esp + 0x10]
        rep movsd
        push    edx
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esp + 0x44], offset g_7dab08
        call    FUN_004c28d0
        xor     ecx, ecx
        test    eax, eax
        setle   cl
        lea     edx, [esp + 0x78]
        mov     dword ptr [esp + 0x38], eax
        lea     eax, [esp + 0xc]
        push    eax
        dec     ecx
        and     ecx, edx
        mov     dword ptr [esp + 0x38], ecx
        mov     ecx, dword ptr [esp + 0xa0]
        mov     ecx, dword ptr [ecx + 0x26c]
        call    FUN_0048ca40
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8c
        ret     0xc
    }
}
