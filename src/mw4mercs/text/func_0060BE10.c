/*
 * FUN_0060BE10 (180 B) — allocates and iterates a list of objects, counting
 * entries that match certain criteria.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00416bc0(void);
extern void __cdecl FUN_00416cc0(void);

__declspec(naked) void FUN_0060BE10(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [eax]
        xor     esi, ecx
        mov     ecx, dword ptr [esi+0x4c]
        xor     bl, bl
        xor     ecx, 0x85739531
        push    edi
        mov     byte ptr [esp+0x13], 0
        je      L_be3b
        mov     byte ptr [esp+0x13], 1
    L_be3b:
        mov     edx, dword ptr [esi+0x58]
        xor     edx, 0x85739531
        je      L_be48
        mov     bl, 1
    L_be48:
        push    0x14
        xor     ebp, ebp
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        je      L_be7b
        mov     eax, dword ptr [esi+0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x84]
        add     ecx, 0x10
        push    ecx
        mov     ecx, edi
        call    FUN_00416bc0
        mov     dword ptr [edi], 0x779e88
        jmp     L_be7d
    L_be7b:
        xor     edi, edi
    L_be7d:
        mov     ecx, edi
        call    FUN_00416cc0
        test    eax, eax
        je      L_beb0
        mov     esi, 2
    L_be8d:
        mov     cl, byte ptr [esp+0x13]
        test    cl, cl
        jne     L_be9b
        cmp     dword ptr [eax+0x20], 1
        je      L_bea5
    L_be9b:
        test    bl, bl
        jne     L_bea4
        cmp     dword ptr [eax+0x20], esi
        je      L_bea5
    L_bea4:
        inc     ebp
    L_bea5:
        mov     ecx, edi
        call    FUN_00416cc0
        test    eax, eax
        jne     L_be8d
    L_beb0:
        test    edi, edi
        je      L_bebc
        mov     edx, dword ptr [edi]
        push    1
        mov     ecx, edi
        call    dword ptr [edx]
    L_bebc:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }
}
