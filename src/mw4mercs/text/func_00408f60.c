/*
 * FUN_00408f60 (1065 B) — __fastcall engine/config initializer. Builds a
 * 0x32-entry table on the stack, initializes two sub-objects (ESI=+0x10,
 * EDI=+0x20), and runs a series of setup/teardown passes over them.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415040(int);
extern void *__cdecl FUN_004084d0(int);
extern void *__cdecl FUN_00408b80(int);
extern void __cdecl FUN_004156c0(int, int);
extern void __cdecl FUN_00408cc0(int);
extern void __cdecl FUN_004156f0(int);
extern void __cdecl FUN_00415920(int);
extern void __cdecl FUN_004159a0(int);
extern int __cdecl FUN_00415a80(int);
extern void __cdecl FUN_00415980(int);
extern void __cdecl FUN_004159e0(int);
extern int __cdecl FUN_00415a50(int);
extern int __cdecl FUN_00415a90(int);
extern void *__cdecl FUN_00415ad0(int);
extern int __cdecl FUN_00415cc0(int);

__declspec(naked) void FUN_00408f60(void)
{
    __asm {
        sub     esp, 0xf8
        push    ebx
        push    ebp
        mov     ebp, ecx
        push    esi
        push    edi
        mov     dword ptr [esp + 0x3c], ebp
        xor     eax, eax
        lea     ecx, [esp + 0x40]
L1:
        mov     dword ptr [ecx], eax
        inc     eax
        add     ecx, 0x4
        cmp     eax, 0x32
        jl      L1
        xor     ecx, ecx
        mov     dword ptr [esp + 0x10], ecx
L2:
        mov     eax, 0x32
        sub     eax, ecx
        push    eax
        call    FUN_00415040
        mov     ecx, dword ptr [esp + 0x14]
        mov     esi, dword ptr [esp + ecx*0x4 + 0x44]
        add     eax, ecx
        mov     edx, dword ptr [esp + eax*0x4 + 0x44]
        lea     eax, [esp + eax*0x4 + 0x44]
        add     esp, 0x4
        mov     dword ptr [eax], esi
        mov     dword ptr [esp + ecx*0x4 + 0x40], edx
        inc     ecx
        cmp     ecx, 0x32
        mov     dword ptr [esp + 0x10], ecx
        jl      L2
        mov     dword ptr [esp + 0x10], 0x0
        lea     esi, [ebp + 0x10]
        lea     edi, [ebp + 0x20]
L3:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L4
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + ecx*0x4 + 0x40]
        push    edx
        mov     ecx, eax
        call    FUN_00408b80
        mov     ebx, eax
        jmp     L5
L4:
        xor     ebx, ebx
L5:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + eax*0x4 + 0x40]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_004156c0
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [esp + edx*0x4 + 0x40]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_004156c0
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp + 0x10], eax
        jl      L3
        mov     ecx, ebp
        call    FUN_00408cc0
        mov     dword ptr [esp + 0x10], 0x0
L6:
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_004156f0
        lea     edx, [esp + 0x10]
        push    edx
        mov     ecx, edi
        call    FUN_004156f0
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp + 0x10], eax
        jl      L6
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_00415920
        mov     ebp, 0x76cda0
        push    edi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x2c], ebp
        call    FUN_00415920
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x14], ebp
        call    FUN_004159a0
        lea     ecx, [esp + 0x14]
        call    FUN_004159a0
        lea     ecx, [esp + 0x28]
        call    FUN_00415a80
        lea     ecx, [esp + 0x14]
        call    FUN_00415a80
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        xor     ebx, ebx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_00415a80
        test    eax, eax
        jz      L7
L8:
        lea     ecx, [esp + 0x28]
        call    FUN_00415a80
        lea     ecx, [esp + 0x14]
        call    FUN_004159e0
        lea     ecx, [esp + 0x28]
        call    FUN_004159e0
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x10], edx
        call    FUN_00415a80
        test    eax, eax
        jnz     L8
L7:
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_00415920
        push    edi
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x2c], ebp
        call    FUN_00415920
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_00415a50
        test    eax, eax
        jz      L9
L10:
        lea     ecx, [esp + 0x14]
        call    FUN_00415a50
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x10], edx
        call    FUN_00415a50
        test    eax, eax
        jnz     L10
L9:
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        xor     eax, eax
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x10], eax
L11:
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00415a90
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x2c]
        call    FUN_00415a90
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp + 0x10], eax
        jl      L11
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x10], ebx
        call    FUN_00415a80
        test    eax, eax
        jz      L12
L13:
        lea     ecx, [esp + 0x14]
        call    FUN_00415ad0
        push    ebx
        lea     ecx, [esp + 0x2c]
        call    FUN_00415a90
        cmp     eax, ebx
        jz      L14
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L14:
        mov     edx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x3c]
        inc     edx
        mov     dword ptr [esp + 0x10], edx
        call    FUN_00408cc0
        lea     ecx, [esp + 0x14]
        call    FUN_00415a80
        test    eax, eax
        jnz     L13
L12:
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x10], ebx
        jmp     L15
L16:
        xor     ebx, ebx
L15:
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L17
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + ecx*0x4 + 0x40]
        push    edx
        mov     ecx, eax
        call    FUN_00408b80
        mov     ebx, eax
L17:
        mov     eax, dword ptr [esp + 0x10]
        lea     ecx, [esp + eax*0x4 + 0x40]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_004156c0
        mov     edx, dword ptr [esp + 0x10]
        lea     eax, [esp + edx*0x4 + 0x40]
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_004156c0
        mov     ecx, dword ptr [esp + 0x3c]
        call    FUN_00408cc0
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        cmp     eax, 0x32
        mov     dword ptr [esp + 0x10], eax
        jl      L16
        mov     ebx, dword ptr [esp + 0x3c]
        mov     ecx, ebx
        call    FUN_00408cc0
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00415920
        push    edi
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x18], ebp
        call    FUN_00415920
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_00415cc0
        test    eax, eax
        jz      L18
L19:
        push    eax
        call    FUN_00415040
        add     esp, 0x4
        mov     esi, eax
        push    esi
        lea     ecx, [esp + 0x18]
        call    FUN_00415a90
        lea     ecx, [esp + 0x14]
        call    FUN_00415ad0
        push    esi
        lea     ecx, [esp + 0x2c]
        call    FUN_00415a90
        test    eax, eax
        jz      L20
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L20:
        mov     edx, dword ptr [esp + 0x10]
        inc     edx
        mov     ecx, ebx
        mov     dword ptr [esp + 0x10], edx
        call    FUN_00408cc0
        lea     ecx, [esp + 0x14]
        call    FUN_00415cc0
        test    eax, eax
        jnz     L19
L18:
        lea     ecx, [esp + 0x28]
        call    FUN_00415980
        lea     ecx, [esp + 0x14]
        call    FUN_00415980
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0xf8
        ret
    }
}
