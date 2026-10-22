/*
 * FUN_0051D350 (213 B) — in-.text data block function (block 0x51AA7D).
 * Uses the 0x7dab44/0x7dab40 XOR-keyed pointer scheme; calls
 * FUN_00416b60 and FUN_006194b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_006194b0(void);

extern int g_007dab44;   /* DAT_007dab44 */
extern int g_007dab40;   /* DAT_007dab40 */

__declspec(naked) void FUN_0051D350(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007dab44]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [g_007dab40]
        xor     edx, ecx
        add     edx, 0x44
        push    esi
        mov     esi, dword ptr [edx]
        xor     esi, 0x85739531
        je      L41E
        mov     edx, dword ptr [edx]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x34]
        test    esi, esi
        je      L41E
        mov     edx, dword ptr [eax]
        xor     edx, ecx
        mov     edx, dword ptr [edx + 0x44]
        xor     edx, 0x85739531
        mov     edx, dword ptr [edx + 0x34]
        mov     edx, dword ptr [edx + 0x58]
        mov     dword ptr [esp + 4], edx
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     edx, dword ptr [eax + 0x44]
        push    ebx
        push    edi
        lea     ecx, [esp + 0xc]
        push    ecx
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x34]
        add     ecx, 0x18
        call    FUN_00416b60
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [eax + 0x38]
        mov     edi, dword ptr [edx + ecx*4]
        mov     edx, dword ptr [g_007dab44]
        mov     edx, dword ptr [edx]
        mov     esi, dword ptr [g_007dab40]
        mov     eax, dword ptr [eax + 0x34]
        mov     eax, dword ptr [eax + ecx*4]
        xor     edx, esi
        mov     esi, dword ptr [edx + 0x44]
        add     edx, 0x44
        xor     esi, 0x85739531
        mov     esi, dword ptr [esi + 0x24]
        mov     ebx, dword ptr [esi + 0x1c]
        sub     ebx, eax
        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x34]
        push    1
        mov     dword ptr [eax + 0x58], ecx
        mov     ecx, dword ptr [edx]
        push    0
        push    edi
        xor     ecx, 0x85739531
        mov     dword ptr [esi + 0x1c], ebx
        call    FUN_006194b0
        pop     edi
        pop     ebx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     0xc
L41E:
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     0xc
    }
}
