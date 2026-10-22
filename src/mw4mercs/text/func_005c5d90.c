/*
 * FUN_005c5d90 (387 B) — __thiscall, RET 0. State-machine update with
 * float timing comparisons and virtual dispatches.
 *
 * __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005c9000(void);
extern void __cdecl FUN_005dbe80(void);
extern void __cdecl FUN_005c6e40(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_005dbeb0(void);

__declspec(naked) void __stdcall FUN_005c5d90(void)
{
    

extern int DAT_0077a1a0;
extern int DAT_0076d5ec;
extern int DAT_0076c5b0;
__asm {
sub     esp, 0x8
        push    esi
        mov     esi, ecx
        cmp     byte ptr [esi + 0x6a0], 0x1
        push    edi
        jnz     L_5dc3
        mov     ecx, dword ptr [esi + 0x170]
        mov     al, byte ptr [ecx + 0x2f8]
        test    al, al
        jnz     L_5db9
        mov     byte ptr [esi + 0x6a0], 0x0
        jmp     L_5dc3
L_5db9:
        mov     eax, dword ptr [ecx]
        push    0x0
        call    dword ptr [eax + 0xb0]
L_5dc3:
        cmp     byte ptr [esi + 0x5a0], 0x1
        jnz     L_5e8a
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx + 0x408]
        test    eax, eax
        jz      L_5e11
        mov     ecx, esi
        call    FUN_005c9000
        fstp    dword ptr [esp + 0xc]
        mov     ecx, esi
        call    FUN_005dbe80
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        fmul dword ptr [DAT_0077a1a0]
        fadd dword ptr [DAT_0076d5ec]
        fcomp   dword ptr [esp + 0xc]
        fnstsw  ax
        test    ah, 0x1
        jnz     L_5e1a
L_5e11:
        mov     byte ptr [esi + 0x5a0], 0x0
        jmp     L_5e60
L_5e1a:
        push    0x3f800000
        mov     ecx, esi
        call    FUN_005c6e40
        cmp     al, 0x1
        jz      L_5e60
        lea     edi, [esi + 0x1c8]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      L_5e60
        test    dword ptr [esi + 0x4e0], 0xfffffffc
        jz      L_5e60
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        and     dl, 0x1
        cmp     dl, 0x1
        jnz     L_5f0d
L_5e60:
        cmp     byte ptr [esi + 0x1c4], 0x1
        jnz     L_5f0d
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx]
        push    0x0
        mov     byte ptr [esi + 0x1c4], 0x0
        call    dword ptr [eax + 0x10c]
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
L_5e8a:
        mov     eax, dword ptr [esi + 0x170]
        mov     ecx, dword ptr [eax + 0x408]
        test    ecx, ecx
        jz      L_5f0d
        fld     dword ptr [ecx + 0x4c]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_5f0d
        mov     ecx, esi
        call    FUN_005c9000
        fstp    dword ptr [esp + 0x8]
        mov     ecx, esi
        call    FUN_005dbeb0
        mov     dword ptr [esp + 0xc], eax
        fild    dword ptr [esp + 0xc]
        fmul dword ptr [DAT_0077a1a0]
        fsub dword ptr [DAT_0076d5ec]
        fcomp   dword ptr [esp + 0x8]
        fnstsw  ax
        test    ah, 0x41
        jz      L_5f0d
        mov     al, byte ptr [esi + 0x1c4]
        test    al, al
        mov     byte ptr [esi + 0x5a0], 0x1
        jnz     L_5f0d
        mov     ecx, dword ptr [esi + 0x170]
        mov     eax, dword ptr [ecx + 0x408]
        test    eax, eax
        jz      L_5f0d
        mov     edx, dword ptr [ecx]
        push    0x1
        mov     byte ptr [esi + 0x1c4], 0x1
        call    dword ptr [edx + 0x10c]
L_5f0d:
        pop     edi
        pop     esi
        add     esp, 0x8
        ret
    }


}
