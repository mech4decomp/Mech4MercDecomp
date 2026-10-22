/*
 * FUN_0051C1C0 (197 B) — allocates a string buffer, copies a string into it,
 * and adjusts a reference count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dab44;
extern int g_7dab40;
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_00416b60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_0051C1C0(void)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx+0x44]
        xor     edx, 0x85739531
        lea     eax, [ecx+0x44]
        je      L_c27d
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x34]
        test    ecx, ecx
        je      L_c27d
        mov     ecx, dword ptr [esp+0xc]
        push    ebx
        mov     ebx, dword ptr [ecx]
        mov     eax, dword ptr [ebx]
        test    eax, eax
        push    esi
        push    edi
        je      L_c206
        push    eax
        call    FUN_006f4230
    L_c206:
        push    0
        push    0xff
        call    FUN_006f3c80
        mov     edx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     dword ptr [ebx], eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     eax, dword ptr [eax+0x44]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x34]
        push    ebx
        add     ecx, 0x18
        call    FUN_00416b60
        mov     edx, dword ptr [eax+0x24]
        test    edx, edx
        je      L_c242
        inc     byte ptr [edx-1]
    L_c242:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, dword ptr [ebx]
        shr     ecx, 2
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        pop     edi
        pop     esi
        pop     ebx
        je      L_c27d
        mov     cl, byte ptr [edx-1]
        lea     eax, [edx-1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_c27d
        push    eax
        call    FUN_004084e0
        add     esp, 4
    L_c27d:
        mov     eax, 1
        ret     0xc
    }
}
