/*
 * FUN_00687ae0 (357 B) — __thiscall (ECX = this), RET 0xC (3 stack params).
 * Vector-style reallocation/insertion with 0x18-byte elements: grows the
 * backing array (operator new/delete), copies existing elements, and inserts
 * a new element depending on a mode flag.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_00687ca0(void);
extern void __cdecl FUN_0040c5d0(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void __fastcall FUN_00687ae0(void *param)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, ecx
        mov     ecx, dword ptr [ebx + 0x4]
        push    edi
        mov     edi, dword ptr [ebx]
        mov     dword ptr [esp + 0xc], ecx
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x8], edx
        lea     eax, [esp + 0x24]
        jc      L_87b19
        lea     eax, [esp + 0x8]
L_87b19:
        mov     eax, dword ptr [eax]
        add     eax, edx
        mov     dword ptr [esp + 0x14], eax
        jz      L_87b38
        lea     ecx, [eax + eax*0x2]
        shl     ecx, 0x3
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        mov     dword ptr [esp + 0x8], eax
        jmp     L_87b40
L_87b38:
        mov     dword ptr [esp + 0x8], 0x0
L_87b40:
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        cmp     edi, ebp
        push    esi
        mov     esi, dword ptr [esp + 0x10]
        jz      L_87b64
L_87b4e:
        test    esi, esi
        jz      L_87b5a
        push    edi
        mov     ecx, esi
        call    FUN_00687ca0
L_87b5a:
        add     edi, 0x18
        add     esi, 0x18
        cmp     edi, ebp
        jnz     L_87b4e
L_87b64:
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, 0x1
        jnz     L_87b9c
        test    esi, esi
        jz      L_87b97
        mov     eax, dword ptr [esp + 0x28]
        mov     edx, dword ptr [eax]
        mov     ecx, dword ptr [eax + 0x4]
        mov     dword ptr [esi], edx
        mov     edx, dword ptr [eax + 0x8]
        mov     dword ptr [esi + 0x4], ecx
        mov     ecx, dword ptr [eax + 0xc]
        mov     dword ptr [esi + 0x8], edx
        mov     dl, byte ptr [eax + 0x10]
        mov     eax, dword ptr [eax + 0x14]
        mov     dword ptr [esi + 0xc], ecx
        mov     byte ptr [esi + 0x10], dl
        mov     dword ptr [esi + 0x14], eax
L_87b97:
        lea     edi, [esi + 0x18]
        jmp     L_87bd0
L_87b9c:
        test    eax, eax
        jbe     L_87bce
        mov     edi, dword ptr [esp + 0x28]
        mov     ebx, eax
L_87ba6:
        test    esi, esi
        jz      L_87bc4
        push    edi
        mov     ecx, esi
        call    FUN_0040c5d0
        mov     ecx, dword ptr [edi + 0xc]
        mov     dl, byte ptr [edi + 0x10]
        mov     eax, dword ptr [edi + 0x14]
        mov     dword ptr [esi + 0xc], ecx
        mov     byte ptr [esi + 0x10], dl
        mov     dword ptr [esi + 0x14], eax
L_87bc4:
        add     esi, 0x18
        dec     ebx
        jnz     L_87ba6
        mov     ebx, dword ptr [esp + 0x18]
L_87bce:
        mov     edi, esi
L_87bd0:
        cmp     ebp, dword ptr [esp + 0x14]
        jz      L_87c12
        mov     ebx, edi
        lea     esi, [ebp + 0x10]
        sub     ebx, ebp
        test    edi, edi
        jz      L_87bfd
L_87bdd:
        lea     ecx, [esi - 0x10]
        push    ecx
        mov     ecx, edi
        call    FUN_0040c5d0
        mov     edx, dword ptr [esi - 0x4]
        mov     al, byte ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [edi + 0xc], edx
        mov     byte ptr [ebx + esi], al
        mov     dword ptr [edi + 0x14], ecx
L_87bfd:
        mov     eax, dword ptr [esp + 0x14]
        add     esi, 0x18
        lea     edx, [esi - 0x10]
        add     edi, 0x18
        cmp     edx, eax
        /* __emit: backward JNZ rel-offset miscomputed by MSVC6 (off-by-4, rel32 call between branch and target) */
        __emit 0x75
        __emit 0xCF
        mov     ebx, dword ptr [esp + 0x18]
L_87c12:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        pop     esi
        mov     dword ptr [esp + 0x28], eax
        pop     ebp
        jz      L_87c27
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_87c27:
        mov     ecx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [ebx], ecx
        lea     eax, [eax + eax*0x2]
        mov     dword ptr [ebx + 0x4], edi
        lea     ecx, [ecx + eax*0x8]
        pop     edi
        mov     dword ptr [ebx + 0x8], ecx
        pop     ebx
        add     esp, 0x10
        ret     0xc
    }
}
