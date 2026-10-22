/*
 * FUN_005d7860 (530 B) — __thiscall (ECX = this, 2 stack params, RET 0x8).
 * Initializes/refreshes the object's render buffers (0x3c/0x40 sub-objects),
 * computes grid dimensions via _ftol, and wires up the main object.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_006f4950(int);
extern void __cdecl FUN_006f49a0(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_006576e0(void);
extern void __cdecl FUN_00657a80(void);
extern void __cdecl FUN_00657eb0(void);
extern int __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_00654150(void);
extern void __cdecl FUN_00654860(void *, void *, void *, void *);

__declspec(naked) void __fastcall FUN_005d7860(int param1, int param2)
{
    

extern int DAT_007f2464;
extern int DAT_0080da54;
extern int DAT_0080da5c;
extern int DAT_0080da58;
extern int DAT_0080da60;
__asm {
sub     esp, 0x8
        mov eax, dword ptr [DAT_007f2464]
        push    ebp
        mov     ebp, ecx
        push    eax
        mov     dword ptr [esp + 0xc], ebp
        call    FUN_006f4950
        mov     eax, dword ptr [ebp + 0x38]
        test    eax, eax
        jnz     l_7a63
        push    esi
        mov     esi, dword ptr [ebp + 0x3c]
        test    esi, esi
        push    edi
        jnz     l_78aa
        push    0x20
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_78a3
        mov     ecx, eax
        call    FUN_006576e0
        mov     dword ptr [ebp + 0x3c], eax
        jmp     l_790f
    l_78a3:
        xor     eax, eax
        mov     dword ptr [ebp + 0x3c], eax
        jmp     l_790f
    l_78aa:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      l_78c8
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     ecx, esi
        mov     dword ptr [esi + 0x8], 0x0
        call    FUN_00657a80
    l_78c8:
        mov ecx, dword ptr [DAT_007f2464]
        push    ecx
        mov     dword ptr [esi], 0x1400
        mov     dword ptr [esi + 0x4], 0x1400
        call    FUN_006f4950
        push    0x80000
        call    FUN_004084d0
        mov     edi, eax
        mov     eax, 0x200
        mov     dword ptr [esi + 0x14], eax
        mov     dword ptr [esi + 0x10], eax
        mov     eax, 0x3f003f
        mov     ecx, 0x20000
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], edi
        rep     stosd
        call    FUN_006f49a0
    l_790f:
        mov     esi, dword ptr [ebp + 0x40]
        test    esi, esi
        jnz     l_793d
        push    0x14
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      l_7933
        mov     ecx, eax
        call    FUN_00657eb0
        mov     dword ptr [ebp + 0x40], eax
        jmp     l_7a16
    l_7933:
        xor     eax, eax
        mov     dword ptr [ebp + 0x40], eax
        jmp     l_7a16
    l_793d:
        fld dword ptr [DAT_0080da54]
        push    ebx
        fsub dword ptr [DAT_0080da5c]
        call    FUN_0075db4a
        fld dword ptr [DAT_0080da58]
        fsub dword ptr [DAT_0080da60]
        mov     edi, eax
        call    FUN_0075db4a
        mov     ebx, eax
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      l_79a9
        mov     ecx, dword ptr [esi + 0x10]
        test    ecx, ecx
        jle     l_7996
        mov     ebp, eax
        mov     dword ptr [esp + 0x10], ecx
    l_7978:
        mov     edx, dword ptr [ebp]
        push    edx
        call    FUN_004084e0
        mov     eax, dword ptr [esp + 0x14]
        add     esp, 0x4
        add     ebp, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], eax
        jnz     l_7978
        mov     ebp, dword ptr [esp + 0x14]
    l_7996:
        mov     eax, dword ptr [esi + 0x8]
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    l_79a9:
        mov     eax, 0x66666667
        imul    ebx
        sar     edx, 0x3
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esi], ebx
        mov     ebx, edx
        mov     eax, 0x66666667
        imul    edi
        sar     edx, 0x3
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     dword ptr [esi + 0x4], edi
        mov     edi, edx
        mov edx, dword ptr [DAT_007f2464]
        push    edx
        call    FUN_006f4950
        lea     eax, [edi*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    edi, edi
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x10], edi
        mov     dword ptr [esi + 0xc], ebx
        jle     l_7a10
        mov     esi, eax
    l_79ff:
        push    ebx
        call    FUN_004084d0
        mov     dword ptr [esi], eax
        add     esp, 0x4
        add     esi, 0x4
        dec     edi
        jnz     l_79ff
    l_7a10:
        call    FUN_006f49a0
        pop     ebx
    l_7a16:
        push    0x400010
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        pop     edi
        pop     esi
        jz      l_7a32
        mov     ecx, eax
        call    FUN_00654150
        jmp     l_7a34
    l_7a32:
        xor     eax, eax
    l_7a34:
        mov     ecx, dword ptr [ebp + 0x40]
        mov     edx, dword ptr [ebp + 0x3c]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        push    edx
        mov     ecx, eax
        mov     dword ptr [ebp + 0x38], eax
        call    FUN_00654860
        mov     dword ptr [ebp + 0x44], 0x1
        call    FUN_006f49a0
        pop     ebp
        add     esp, 0x8
        ret     0x8
    l_7a63:
        inc     dword ptr [ebp + 0x44]
        call    FUN_006f49a0
        pop     ebp
        add     esp, 0x8
        ret     0x8
    }


}
