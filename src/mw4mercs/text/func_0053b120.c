/*
 * FUN_0053B120 (173 B) — Team color/pattern initializer.
 *
 * Initializes team color/pattern fields and optionally reads
 * color data from a stream, comparing against stored values.
 *
 * __thiscall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __stdcall FUN_005663b0(void);

__declspec(naked) void __fastcall FUN_0053b120(void)
{
    

extern int DAT_007db094;
extern int DAT_007afaf0;
extern int DAT_007afaf8;
extern int DAT_007afaf4;
extern int DAT_007afafc;
__asm {
sub     esp, 0x10
        push    esi
        mov     esi, ecx                        ; this
        mov     al, byte ptr [esi + 0x16]
        test    al, al
        mov     dword ptr [esi + 0x3534], 0x02
        mov     dword ptr [esi + 0x205524], 0x00
        jnz     done

        mov ecx, dword ptr [DAT_007db094]

        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        cmp     dword ptr [esp + 0x18], eax
        jnz     done

        mov edx, dword ptr [DAT_007afaf0]

        mov ecx, dword ptr [DAT_007afaf8]

        mov eax, dword ptr [DAT_007afaf4]

        mov     dword ptr [esp + 0x04], edx

        mov edx, dword ptr [DAT_007afafc]

        push    edi
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x14], edx
        push    0x10
        lea     edx, [esp + 0x0c]
        mov     dword ptr [esp + 0x10], eax
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x20]          ; read 16 bytes from stream
        lea     eax, [esi + 0x239ddc]
        mov     ecx, 0x04
        mov     edi, eax
        lea     esi, [esp + 0x08]
        xor     edx, edx
        repz cmpsd                              ; compare 4 dwords
        pop     edi
        jz      done
        mov     ecx, dword ptr [esp + 0x04]
        mov     edx, dword ptr [esp + 0x08]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0x0c]
        mov     dword ptr [eax + 0x04], edx
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0x08], ecx
        mov     dword ptr [eax + 0x0c], edx
        call    FUN_005663b0

    done:
        pop     esi
        add     esp, 0x10
        ret     0x08
    }


}
