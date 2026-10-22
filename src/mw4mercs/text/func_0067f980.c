/*
 * FUN_0067f980 (173 B) — Dispatches through a table of function
 * pointers (base 0x0082db30, stride 0x20) indexed by this+0x18.
 * If FUN_0041fd80() returns non-null, computes a float via
 * FUN_00680190 and calls the table entry; otherwise calls the
 * alternate table entry (0x0082db34).
 *
 * __thiscall (ECX = this), RET 0x1c (seven stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_0041fd80(void);
extern void *__cdecl FUN_0067f7f0(void *a, int b, int c);
extern float __cdecl FUN_00680190(int p);

__declspec(naked) void __fastcall FUN_0067f980(int this, int p1, int p2, int p3,
                                               int p4, int p5, int p6, int p7)
{
    __asm {
        sub     esp, 8
        push    ebx
        push    esi
        mov     esi, ecx
        lea     ecx, [esi + 0x10]
        call    FUN_0041fd80
        mov     ebx, eax
        test    ebx, ebx
        jz      l_else
        mov     esi, dword ptr [esi + 0x18]
        push    edi
        mov     edi, dword ptr [esp + 0x30]
        shl     esi, 5
        add     esi, 0x82db30
        mov     eax, dword ptr [esi + 0x18]
        push    edi
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        call    FUN_0067f7f0
        mov     eax, dword ptr [eax]
        push    eax
        call    FUN_00680190
        fstp    dword ptr [esp + 0x40]
        mov     edx, dword ptr [esp + 0x40]
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x38]
        push    edx
        mov     edx, dword ptr [esp + 0x38]
        push    edi
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        push    edx
        mov     edx, dword ptr [esp + 0x3c]
        push    eax
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [esi]
        add     esp, 0x34
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x1c
    l_else:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esi + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        push    ecx
        mov     ecx, dword ptr [esp + 0x24]
        push    edx
        mov     edx, dword ptr [esi + 0x2c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x28]
        push    edx
        shl     eax, 5
        push    ecx
        call    dword ptr [eax + 0x82db34]
        add     esp, 0x1c
        pop     esi
        pop     ebx
        add     esp, 8
        ret     0x1c
    }
}
