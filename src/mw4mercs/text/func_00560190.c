/*
 * FUN_00560190 (315 B) — Object initialization with resource loading (__thiscall).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007dddd4;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_00729a87(void);
extern int DAT_007dddd0;
extern int DAT_0076b318;
extern int DAT_007dddb0;
extern int DAT_007ddda8;
extern int DAT_007ddda0;
extern int DAT_007ddd98;
extern int DAT_007ddd90;

__declspec(naked) void FUN_00560190(void)
{
    __asm {
        mov     al, byte ptr [esp + 4]
        push    ebx
        push    ebp
        mov     ebp, ecx
        xor     ebx, ebx
        mov     byte ptr [ebp + 0x135], al
        cmp     dword ptr [DAT_007dddd4], ebx
        mov     dword ptr [ebp], 0x77ded0
        mov     dword ptr [ebp + 0x118], ebx
        mov     dword ptr [ebp + 0x10c], ebx
        jnz     l_skip_init

        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [DAT_007dab40]
        push    edi
        push    ebx
        xor     edx, esi
        mov     esi, dword ptr [edx + 0xc]
        push    0x100
        xor     esi, 0x85739531
        mov     eax, dword ptr [esi]
        push    ebx
        push    0x2de
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        call    FUN_00729a87
        mov     edx, dword ptr [esi]
        push    0x2e0
        mov     ecx, esi
        mov     dword ptr [DAT_007dddd0], eax
        call    dword ptr [edx + 0x34]
        mov     edi, dword ptr [DAT_0076b318]
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [DAT_007dddb0], eax
        mov     eax, dword ptr [esi]
        push    0x2e1
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        call    edi
        mov     edx, dword ptr [esi]
        add     esp, 4
        push    0x2e2
        mov     ecx, esi
        mov     dword ptr [DAT_007ddda8], eax
        call    dword ptr [edx + 0x34]
        push    eax
        call    edi
        add     esp, 4
        mov     dword ptr [DAT_007ddda0], eax
        mov     eax, dword ptr [esi]
        push    0x2e3
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        push    eax
        call    edi
        mov     edx, dword ptr [esi]
        add     esp, 4
        push    0x2e4
        mov     ecx, esi
        mov     dword ptr [DAT_007ddd98], eax
        call    dword ptr [edx + 0x34]
        push    eax
        call    edi
        add     esp, 4
        pop     edi
        mov     dword ptr [DAT_007ddd90], eax
        pop     esi

    l_skip_init:
        mov     eax, dword ptr [DAT_007dddd4]
        mov     ecx, dword ptr [DAT_007ddda8]
        inc     eax
        mov     dword ptr [DAT_007dddd4], eax
        mov     eax, dword ptr [DAT_007dddd0]
        mov     dword ptr [ebp + 0x108], eax
        mov     dword ptr [ebp + 0x11c], ebx
        mov     dword ptr [ebp + 0x120], ebx
        mov     byte ptr [ebp + 0x110], bl
        mov     byte ptr [ebp + 4], bl
        mov     byte ptr [ebp + 0x134], bl
        mov     dword ptr [ebp + 0x124], 0x44480000
        mov     dword ptr [ebp + 0x128], 0x44160000
        mov     dword ptr [ebp + 0x114], ecx
        mov     eax, ebp
        pop     ebp
        pop     ebx
        ret     4
    }
}
