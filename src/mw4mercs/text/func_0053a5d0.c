/*
 * FUN_0053A5D0 (226 B) — Team instance loader.
 *
 * Reads team instance data from a stream, iterates over entries,
 * and populates a team-related structure.
 *
 * __thiscall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_0041eb40(void *buf, int size);
extern int __fastcall FUN_004d2000(void *this, const char *path, int flag);
extern void __fastcall FUN_004d2310(void *this);
extern void *__fastcall FUN_004cec10(void *this);
extern int __fastcall FUN_004d9910(void *this, void *buf, int flag);
extern int __stdcall FUN_0041fcd0(int obj);
extern void __fastcall FUN_004d21c0(void *this);

__declspec(naked) void __fastcall FUN_0053a5d0(void)
{
    

extern int DAT_007db094;
__asm {
sub     esp, 0x50
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x60]
        push    edi
        push    0x4
        lea     eax, [esp + 0x10]
        mov     ebx, ecx
        xor     edi, edi
        push    eax
        mov     ecx, ebp
        mov     dword ptr [esp + 0x14], edi
        call    FUN_0041eb40
        cmp     dword ptr [esp + 0x0c], edi
        jle     done
        push    esi
        add     ebx, 0x204d00

    loop_start:
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, ebp
        mov     dword ptr [esp + 0x20], 0
        call    FUN_0041eb40
        push    0x8
        lea     edx, [esp + 0x6c]
        push    edx
        mov     ecx, ebp
        mov     byte ptr [esp + 0x70], 0
        call    FUN_0041eb40
        push    0x0
        push    0x77b690
        lea     ecx, [esp + 0x24]
        call    FUN_004d2000
        lea     ecx, [esp + 0x1c]
        call    FUN_004d2310
        mov ecx, dword ptr [DAT_007db094]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp + 0x14], cl
        mov     dx, word ptr [eax + 0x02]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x24]
        push    ecx
        mov     word ptr [esp + 0x22], dx
        call    FUN_004d9910
        mov     ecx, dword ptr [ebx]
        add     esp, 0x0c
        mov     esi, eax
        push    esi
        call    FUN_0041fcd0
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x514], edx
        mov     al, byte ptr [esp + 0x68]
        lea     ecx, [esp + 0x1c]
        mov     byte ptr [esi + 0x518], al
        call    FUN_004d21c0
        mov     eax, dword ptr [esp + 0x10]
        inc     edi
        add     ebx, 0x04
        cmp     edi, eax
        jl      loop_start
        pop     esi

    done:
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret     0x08
    }


}
