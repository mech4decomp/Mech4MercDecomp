/*
 * FUN_00481390 (241 B) — __thiscall MLR object constructor/loader.
 * Calls FUN_00482050, sets vtable ptr 0x76f988, and (for long names)
 * loads a string via FUN_00412a00, looks it up (FUN_0048fac0 /
 * FUN_0048f380), allocates a 0x24-byte object, constructs it via
 * FUN_00422ea0, stores it at this+0x8c, then invokes a virtual method
 * and FUN_004816e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007da69c;
extern int g_007da848;
extern void __cdecl FUN_00482050(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_0048fac0(void);
extern void __cdecl FUN_0048f380(void);
extern void * __cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00422ea0(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_004816e0(void);

__declspec(naked) void FUN_00481390(void)
{
    __asm {
        push    ecx
        mov     eax, dword ptr [g_007da69c]
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        push    edi
        push    ebx
        mov     esi, ecx
        push    eax
        call    FUN_00482050
        cmp     edi, 7
        mov     dword ptr [esi], 0x76f988
        mov     dword ptr [esi+0x8c], 0
        jle     L_48145e
        lea     ecx, [esp+0x18]
        push    ecx
        push    ebx
        mov     dword ptr [esp+0x20], 0
        call    FUN_00412a00
        mov     edx, dword ptr [esp+0x20]
        add     esp, 8
        test    edx, edx
        jz      L_48145e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp+0xc], ecx
        jz      L_481445
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048fac0
        mov     edi, eax
        test    edi, edi
        jnz     L_48141a
        mov     edx, dword ptr [esp+0x18]
        mov     ecx, dword ptr [g_007da848]
        push    eax
        push    edx
        call    FUN_0048f380
        mov     edi, eax
L_48141a:
        push    0x24
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_481432
        push    edi
        mov     ecx, eax
        call    FUN_00422ea0
        jmp     L_481434
L_481432:
        xor     eax, eax
L_481434:
        inc     dword ptr [eax+8]
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [esi+0x8c], eax
        or      dword ptr [esi+0x78], 0x40
L_481445:
        test    edx, edx
        jz      L_48145e
        mov     cl, byte ptr [edx-1]
        lea     eax, [edx-1]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_48145e
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_48145e:
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [esp+0x18]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
        lea     edx, [esp+0x14]
        push    edx
        mov     ecx, esi
        call    FUN_004816e0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     8
    }
}
