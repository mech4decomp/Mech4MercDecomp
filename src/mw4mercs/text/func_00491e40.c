/*
 * FUN_00491e40 (258 B) — MLR __thiscall destructor: sets the vtable
 * pointer, releases a list of child objects (virtual call), clears a
 * global back-pointer, tears down a linked list, frees a string array
 * and the object buffer, then calls a base-class destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_007700f8;
extern void *g_007da884;

extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00492750(void);
extern void __cdecl FUN_00492700(void);
extern void __cdecl FUN_00492730(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412b60(void);

__declspec(naked) void FUN_00491e40(void)
{
    __asm {
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        mov     dword ptr [ebp], offset g_007700f8
        mov     eax, dword ptr [ebp+0x44]
        push    edi
        xor     edi, edi
        test    eax, eax
        jbe     L_491e88
        mov     ebx, dword ptr [ebp+0x40]
L_491e59:
        mov     ecx, dword ptr [ebx+edi*4]
        test    ecx, ecx
        lea     esi, [edi*4]
        jz      L_491e80
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
        mov     ecx, dword ptr [ebp+0x48]
        push    0x0
        add     ecx, esi
        mov     dword ptr [ebx+esi], 0x0
        call    FUN_00412780
L_491e80:
        mov     eax, dword ptr [ebp+0x44]
        inc     edi
        cmp     edi, eax
        jc      L_491e59
L_491e88:
        cmp     ebp, dword ptr [g_007da884]
        jnz     L_491e9a
        mov     dword ptr [g_007da884], 0x0
L_491e9a:
        mov     eax, dword ptr [ebp+0x54]
        test    eax, eax
        lea     edi, [ebp+0x50]
        jz      L_491ed9
L_491ea4:
        mov     ecx, dword ptr [edi]
        mov     esi, dword ptr [ecx+0x4]
        test    esi, esi
        jz      L_491ec9
L_491ead:
        mov     edx, dword ptr [esi+0xc]
        push    edx
        mov     ecx, edi
        call    FUN_00492750
        mov     ebx, dword ptr [esi+0x8]
        push    esi
        mov     ecx, edi
        call    FUN_00492700
        test    ebx, ebx
        mov     esi, ebx
        jnz     L_491ead
L_491ec9:
        mov     eax, dword ptr [edi]
        xor     ecx, ecx
        mov     dword ptr [eax+0x8], eax
        mov     dword ptr [eax+0x4], ecx
        mov     dword ptr [eax+0xc], eax
        mov     dword ptr [edi+0x4], ecx
L_491ed9:
        mov     eax, dword ptr [edi]
        push    0x1
        push    eax
        call    FUN_00492730
        mov     eax, dword ptr [ebp+0x48]
        add     esp, 0x8
        test    eax, eax
        jz      L_491f25
        mov     ecx, dword ptr [eax-0x4]
        lea     edi, [eax-0x4]
        lea     esi, [eax+ecx*4]
        dec     ecx
        js      L_491f1c
        lea     ebx, [ecx+0x1]
L_491efc:
        mov     eax, dword ptr [esi-0x4]
        sub     esi, 0x4
        test    eax, eax
        jz      L_491f19
        mov     cl, byte ptr [eax-0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_491f19
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_491f19:
        dec     ebx
        jnz     L_491efc
L_491f1c:
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_491f25:
        mov     eax, dword ptr [ebp+0x40]
        test    eax, eax
        jz      L_491f35
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_491f35:
        lea     ecx, [ebp+0x4]
        call    FUN_00412b60
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
