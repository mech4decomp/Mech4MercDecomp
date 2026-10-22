/*
 * FUN_0048fd20 (173 B) — MLR image-instance constructor (__thiscall, RET 0xC).
 * Initializes vtable/float fields, reads data through virtual calls on a
 * source object, and conditionally builds a sub-object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415180(void);
extern void __cdecl FUN_00412a00(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_00490600(void);
extern int g_0076ff30;
extern int g_0076ff50;

__declspec(naked) void FUN_0048fd20(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x30
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00415180
        mov     ebx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [ebx]
        mov     eax, 0xbf800000
        lea     edi, [esi + 0xc]
        mov     dword ptr [edi], eax
        mov     dword ptr [edi + 0x8], eax
        mov     dword ptr [edi + 0x4], eax
        push    0x4
        lea     eax, [esi + 0x8]
        lea     ebp, [esi + 0x7c]
        mov     dword ptr [ebp], 0
        push    eax
        mov     ecx, ebx
        mov     dword ptr [esi], offset g_0076ff30
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0xc
        push    edi
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edx, dword ptr [eax]
        push    0x30
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx + 0x20]
        mov     edi, dword ptr [esp + 0x4c]
        cmp     edi, 0x9
        jl      L_fd91
        push    ebp
        push    ebx
        call    FUN_00412a00
        add     esp, 0x8
        jmp     L_fd9d
L_fd91:
        push    offset g_0076ff50
        mov     ecx, ebp
        call    FUN_00412780
L_fd9d:
        cmp     edi, 0xc
        jl      L_fdb5
        cmp     edi, 0xf
        jge     L_fdb5
        mov     edx, dword ptr [ebx]
        push    0x4
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, ebx
        call    dword ptr [edx + 0x20]
L_fdb5:
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_00490600
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x30
        ret     0xc
    }
}
