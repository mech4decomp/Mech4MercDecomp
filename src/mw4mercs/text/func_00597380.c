/*
 * FUN_00597380 (481 B) — __thiscall (ECX = this) object-state processor.
 * Traverses linked lists, updates state flags, calls FUN_00412740 /
 * FUN_00618cb0.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __stdcall FUN_00412740(void *, void *);
extern int __cdecl FUN_00618cb0(int);

/* extern data symbols for absolute-memory derefs */
extern int DAT_007dab44;
extern int DAT_007dab40;

__declspec(naked) void __stdcall FUN_00597380(void)
{
    
__asm {
sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x48]
        test    eax, eax
        push    edi
        mov     byte ptr [esi + 0x5d], 0x1
        jz      label_7559
        mov     ecx, dword ptr [eax + 0x44]
        mov     ebx, 0x2
        mov     dword ptr [eax + 0x18], ebx
        add     eax, 0xdc
        mov     dword ptr [esi + 0x58], ecx
        push    eax
        lea     ecx, [esi + 0x54]
        call    FUN_00412740
        mov     edx, dword ptr [esi + 0x48]
        mov     edi, dword ptr [edx + 0x60]
        test    edi, edi
        lea     ebp, [edx + 0x60]
        mov     dword ptr [esi + 0x38], 0x1
        jz      label_742b
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        mov     dword ptr [esp + 0x14], ecx
        jz      label_742b
        mov     edi, dword ptr [edx + 0x58]

label_73db:
        test    edi, edi
        jz      label_741b
        mov     eax, dword ptr [edi]
        test    eax, eax
        mov     edi, dword ptr [edi + 0x4]
        jz      label_741b
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax + 0x10]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx + 0x44]
        xor     ecx, 0x85739531
        test    eax, eax
        push    ecx
        mov     edx, esp
        mov     dword ptr [edx], eax
        jz      label_7410
        inc     byte ptr [eax - 1]

label_7410:
        call    FUN_00618cb0
        cmp     al, 0x1
        jz      label_742b
        jmp     label_73db

label_741b:
        push    ebp
        lea     ecx, [esi + 0x34]
        call    FUN_00412740
        mov     dword ptr [esi + 0x38], 0x0

label_742b:
        mov     ecx, dword ptr [esi + 0x48]
        mov     ebp, dword ptr [ecx + 0x14]
        test    ebp, ebp
        mov     dword ptr [esp + 0x14], ecx
        jz      label_744a
        cmp     dword ptr [ebp + 0x20], ebx
        jnz     label_744a
        cmp     dword ptr [ebp + 0x18], ebx
        jz      label_744a
        mov     dword ptr [ebp + 0x18], 0x1

label_744a:
        mov     esi, dword ptr [esi + 0x10]
        jmp     label_7453

label_744f:
        mov     ecx, dword ptr [esp + 0x14]

label_7453:
        test    esi, esi
        jz      label_7536
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     esi, dword ptr [esi + 0x4]
        jz      label_7536
        mov     eax, dword ptr [edi + 0x18]
        cmp     eax, 0x2
        jz      label_7453
        mov     cl, byte ptr [edi + 0xb2]
        mov     bl, 0x1
        cmp     cl, bl
        mov     byte ptr [esp + 0x13], 0x0
        mov     byte ptr [edi + 0xb0], 0x0
        jnz     label_749a
        test    eax, eax
        jnz     label_749a
        mov     al, byte ptr [edi + 0xb1]
        test    al, al
        jnz     label_749a
        mov     byte ptr [esp + 0x13], bl

label_749a:
        mov     edx, dword ptr [edi + 0x24]
        xor     ecx, ecx

label_749f:
        test    edx, edx
        jz      label_74cf
        mov     eax, dword ptr [edx]
        test    eax, eax
        mov     edx, dword ptr [edx + 0x4]
        jz      label_74cf
        cmp     dword ptr [eax + 0x18], 0x2
        jz      label_74b9
        xor     bl, bl
        mov     ecx, 0x1

label_74b9:
        cmp     dword ptr [eax + 0x20], 0x3
        jnz     label_74cb
        cmp     dword ptr [eax + 0x50], 0x0
        jle     label_74cb
        mov     bl, 0x1
        xor     ecx, ecx
        jmp     label_749f

label_74cb:
        test    ecx, ecx
        jz      label_749f

label_74cf:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     label_74f2
        mov     eax, dword ptr [edi + 0x2c]

label_74da:
        test    eax, eax
        jz      label_74f2
        mov     ecx, dword ptr [eax]
        test    ecx, ecx
        mov     eax, dword ptr [eax + 0x4]
        jz      label_74f2
        cmp     dword ptr [ecx + 0x18], 0x2
        jnz     label_74da
        mov     byte ptr [esp + 0x13], 0x1

label_74f2:
        test    bl, bl
        jz      label_7509
        mov     al, byte ptr [edi + 0xb1]
        test    al, al
        jnz     label_7510
        mov     byte ptr [edi + 0xb0], 0x1
        jmp     label_7510

label_7509:
        mov     dword ptr [edi + 0x18], 0x0

label_7510:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jz      label_744f
        mov     eax, dword ptr [edi + 0x18]
        test    eax, eax
        jz      label_752a
        mov     byte ptr [edi + 0xb1], 0x1

label_752a:
        mov     dword ptr [edi + 0x18], 0x0
        jmp     label_744f

label_7536:
        test    ebp, ebp
        mov     eax, 0x1
        jz      label_754d
        cmp     dword ptr [ebp + 0x20], eax
        jnz     label_754d
        cmp     dword ptr [ebp + 0x18], 0x2
        jz      label_754d
        mov     dword ptr [ebp + 0x18], eax

label_754d:
        inc     dword ptr [ecx + 0x50]
        cmp     dword ptr [ecx + 0x20], 0x3
        jnz     label_7559
        mov     dword ptr [ecx + 0x18], eax

label_7559:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }


}
