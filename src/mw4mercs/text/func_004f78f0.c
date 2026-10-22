/*
 * FUN_004f78f0 (356 B) — __thiscall MLR/Adept object destructor. Releases
 * sub-objects, iterates a list of child objects, and frees arrays.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dc740;
extern int g_007dab44;
extern int g_007dab40;

extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_0040c0e0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_0041fc90(void);
extern void __cdecl FUN_00417980(void);
extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_004084e0(void *p);
extern void __cdecl FUN_004d9db0(void);

__declspec(naked) void FUN_004f78f0(void)
{
    __asm {
        sub     esp, 0xc
        push    edi
        mov     edi, ecx
        push    0x8
        mov     dword ptr [edi], 0x775984
        call    FUN_004c8e90
        lea     eax, [edi + 0x1cc]
        mov     dword ptr [esp + 0xc], eax
        mov     eax, dword ptr [eax]
        add     esp, 0x4
        lea     ecx, [esp + 0x4]
        mov     dword ptr [esp + 0xc], eax
        mov     dword ptr [esp + 0x4], 0x774d10
        call    FUN_0040c0e0
        test    eax, eax
        jz      L7946
L792B:
        mov     ecx, dword ptr [g_007dc740]
        mov     ecx, dword ptr [ecx]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x8]
        lea     ecx, [esp + 0x4]
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L792B
L7946:
        mov     eax, dword ptr [edi + 0xd8]
        mov     eax, dword ptr [eax + 0x140]
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        jz      L7973
        xor     ebx, ebx
        lea     esi, [eax + 0x18]
L795E:
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        jz      L7973
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
        inc     ebx
        add     esi, 0x4
        cmp     ebx, 0x8
        jl      L795E
L7973:
        lea     ebp, [edi + 0x1dc]
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L7997
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L7997
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L7997:
        lea     ebx, [edi + 0x1d4]
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L79BB
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      L79BB
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L79BB:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx + 0x10]
        xor     ecx, 0x85739531
        jz      L79D9
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
L79D9:
        push    0x4
        call    FUN_004c8e90
        mov     eax, dword ptr [edi + 0x19c]
        lea     esi, [edi + 0x19c]
        add     esp, 0x4
        mov     ecx, esi
        call    dword ptr [eax + 0x8]
        mov     ecx, ebp
        call    FUN_0041fc90
        mov     ecx, ebx
        call    FUN_0041fc90
        lea     ecx, [edi + 0x1cc]
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_004169c0
        mov     eax, dword ptr [edi + 0x194]
        test    eax, eax
        pop     esi
        pop     ebp
        pop     ebx
        jz      L7A2A
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7A2A:
        mov     eax, dword ptr [edi + 0x18c]
        test    eax, eax
        jz      L7A3D
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L7A3D:
        lea     ecx, [edi + 0x184]
        call    FUN_00417980
        mov     ecx, edi
        call    FUN_004d9db0
        pop     edi
        add     esp, 0xc
        ret
    }
}
