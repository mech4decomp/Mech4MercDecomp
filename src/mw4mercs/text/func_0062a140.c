/*
 * FUN_0062a140 (153 B) — __fastcall (param_1 in ECX), plain RET.
 *
 * Reads a global table pointer (0x7dab44 ^ 0x7dab40), selects a
 * sub-table by a flag byte, and scans param_1's 0x1c-byte element
 * array for an element of type 0x34, returning 1 if found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;

__declspec(naked) unsigned char __fastcall FUN_0062a140(int param_1)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [eax]
        push    ebx
        push    esi
        push    edi
        xor     edx, dword ptr [g_7dab40]
        lea     eax, [edx + 0xc]
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     bl, byte ptr [edx + 0x16]
        test    bl, bl
        jz      L_62a16e
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x50]
        jmp     L_62a179
    L_62a16e:
        mov     edx, dword ptr [eax]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x54]
    L_62a179:
        mov     edx, dword ptr [eax + 0x38]
        test    edx, edx
        jz      L_62a1cd
        mov     eax, dword ptr [ecx + 0x50]
        mov     esi, dword ptr [ecx + 0x54]
        sub     esi, eax
        mov     eax, 0x92492493
        imul    esi
        add     edx, esi
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        xor     edi, edi
        add     edx, eax
        jz      L_62a1cd
        mov     ebx, dword ptr [ecx + 0x50]
    L_62a1a2:
        mov     edx, dword ptr [ebx]
        cmp     dword ptr [edx + 0x4], 0x34
        jz      L_62a1d3
        mov     edx, dword ptr [ecx + 0x50]
        mov     esi, dword ptr [ecx + 0x54]
        sub     esi, edx
        mov     eax, 0x92492493
        imul    esi
        add     edx, esi
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        inc     edi
        add     edx, eax
        add     ebx, 0x1c
        cmp     edi, edx
        jc      L_62a1a2
    L_62a1cd:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    L_62a1d3:
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        ret
    }
}
