/*
 * FUN_004d9db0 (275 B) — __thiscall: destructor/teardown. Releases cached
 * objects, decrements a global counter, releases sub-objects via vtable
 * dispatch, and destroys member sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(int);
extern void __cdecl FUN_004dab70(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_004dc360(void);

extern int g_007dc580;

__declspec(naked) void FUN_004d9db0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x12c]
        xor     ebx, ebx
        cmp     esi, ebx
        mov     dword ptr [edi], 0x773288
        jz      L_9de6
        mov     eax, dword ptr [esi]
        cmp     eax, ebx
        jz      L_9dd7
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9dd7:
        push    esi
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi + 0x12c], ebx
L_9de6:
        dec     dword ptr [g_007dc580]
        mov     ecx, edi
        call    FUN_004dab70
        mov     ecx, dword ptr [edi + 0x124]
        cmp     ecx, ebx
        jz      L_9e09
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov     dword ptr [edi + 0x124], ebx
L_9e09:
        mov     ecx, dword ptr [edi + 0x128]
        cmp     ecx, ebx
        jz      L_9e1f
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov     dword ptr [edi + 0x128], ebx
L_9e1f:
        lea     ebx, [edi + 0xcc]
        mov     ebp, 0x3
L_9e2a:
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_9e49
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        test    al, al
        jz      L_9e49
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
        mov     dword ptr [ebx], 0x0
L_9e49:
        add     ebx, 4
        dec     ebp
        jnz     L_9e2a
        mov     ecx, dword ptr [edi + 0xd8]
        test    ecx, ecx
        jz      L_9e5f
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_9e5f:
        mov     ecx, dword ptr [edi + 0xe0]
        test    ecx, ecx
        jz      L_9e6f
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_9e6f:
        lea     ecx, [edi + 0x148]
        call    FUN_0041fc90
        lea     ecx, [edi + 0xbc]
        call    FUN_00417980
        lea     ecx, [edi + 0x78]
        call    FUN_004d21c0
        lea     ecx, [edi + 0x34]
        call    FUN_004d21c0
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jz      L_9eaf
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_9eaf
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_9eaf:
        lea     ecx, [edi + 0x20]
        call    FUN_0041fc90
        mov     ecx, edi
        call    FUN_004dc360
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
