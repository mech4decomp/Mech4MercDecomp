/*
 * FUN_5e0026a0 (391 B) — __stdcall, RET 0xc (3 stack params). Surface
 * attach/init: queries the input surface via vtable slot 0x30, sets up
 * internal state, validates format codes, and calls FUN_5e01e730.
 *
 * Match: target 100%
 */

extern void __cdecl FUN_5e00e190(void);
extern void __cdecl FUN_5e01e730(void);

extern int g_5e038408;   /* debug string arg */
extern int *g_5e035010;  /* IAT: OutputDebugStringA */
extern int g_5e013200;   /* function pointer stored at +0x4068 */

__declspec(naked) void __stdcall FUN_5e0026a0(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        mov     dword ptr [esp + 0xc], 0x0
        cmp     dword ptr [esi + 0x426c], ebx
        jz      L_81c
        test    ebx, ebx
        jz      L_6fb
        xor     eax, eax
        mov     ecx, dword ptr [ebx]
        mov     dword ptr [esp + 0x14], eax
        lea     edx, [esp + 0xc]
        mov     dword ptr [esp + 0x18], eax
        push    edx
        mov     dword ptr [esp + 0x20], eax
        lea     eax, [esp + 0x14]
        push    eax
        push    ebx
        mov     dword ptr [esp + 0x1c], 0x20000
        call    dword ptr [ecx + 0x30]
        mov     ecx, 0x1a
        xor     eax, eax
        lea     edi, [esi + 0x4008]
        rep stosd
L_6fb:
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        lea     ecx, [esi + 0x4278]
        call    FUN_5e00e190
        push    ebx
        lea     ecx, [esi + 0x41f0]
        call    FUN_5e00e190
        mov     edi, 0x1
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_732
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [esi + 0x45c4], edi
        jmp     L_73c
L_732:
        mov     dword ptr [esi + 0x45c4], 0x0
L_73c:
        mov     eax, dword ptr [esi + 0x426c]
        test    eax, eax
        jz      L_7a9
        mov     dword ptr [esi + 0x4058], 0x0
        mov     eax, dword ptr [esi + 0x4274]
        cmp     eax, 0x235
        jz      L_795
        cmp     eax, 0x22b
        jnz     L_780
        mov     dword ptr [esi + 0x405c], 0x5
        mov     dword ptr [esi + 0x4060], 0xa
        mov     dword ptr [esi + 0x4058], edi
        jmp     L_7a9
L_780:
        cmp     eax, 0x613
        jz      L_795
        pop     edi
        pop     esi
        mov     eax, 0x887602c1
        pop     ebx
        add     esp, 0x14
        ret     0xc
L_795:
        mov     dword ptr [esi + 0x405c], 0x4
        mov     dword ptr [esi + 0x4060], 0x9
L_7a9:
        mov     eax, dword ptr [esi + 0x42f4]
        test    eax, eax
        jz      L_7d7
        mov     eax, dword ptr [esi + 0x42e0]
        test    ah, 0x8
        jnz     L_7d7
        push    OFFSET g_5e038408
        call    dword ptr [g_5e035010]
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        add     esp, 0x14
        ret     0xc
L_7d7:
        test    ebx, ebx
        jz      L_81c
        lea     eax, [esi - 0x4]
        mov     dword ptr [esi + 0x406c], eax
        mov     dword ptr [esi + 0x4068], OFFSET g_5e013200
        mov     ecx, dword ptr [esi + 0x41f8]
        mov     edx, dword ptr [esi + 0x41fc]
        mov     eax, dword ptr [esi + 0x4200]
        push    ecx
        mov     ecx, dword ptr [esi + 0x4214]
        push    edx
        mov     edx, dword ptr [esi + 0x4274]
        push    eax
        push    ecx
        push    edx
        lea     ecx, [esi + 0x4008]
        call    FUN_5e01e730
L_81c:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x14
        ret     0xc
    }
}
