/*
 * FUN_00504110 (407 B) — Geometry scale validation/application
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_00504110(void)
{
    

/* extern data/function symbols for absolute-address operands */
extern void __cdecl FUN_100411e97(void);
extern void __cdecl FUN_100411ba8(void);
extern void __cdecl FUN_10041de2a(void);
extern void __cdecl FUN_1004d1f9c(void);
extern void __cdecl FUN_1004d2476(void);
extern void __cdecl FUN_1004d25aa(void);
extern int DAT_007db0b0;
extern void __cdecl FUN_1004d27a7(void);
extern void __cdecl FUN_100412a8a(void);
extern void __cdecl FUN_100412b3b(void);
extern void __cdecl FUN_1004d25b8(void);
extern void __cdecl FUN_1004d2560(void);
extern void __cdecl FUN_100412d8a(void);
extern void __cdecl FUN_100412a6f(void);
extern void __cdecl FUN_10050314c(void);
extern void __cdecl FUN_100411c3b(void);
extern int DAT_0076d5ec;
extern void __cdecl FUN_006faa3e(void);
extern int DAT_007dc814;
extern void __cdecl FUN_1004d2044(void);
extern void __cdecl FUN_10041dd3c(void);
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xB4
        push    ebx
        mov     ebx, [ebp+8]
        push    esi
        mov     esi, [ebx]
        mov     eax, [esi]
        push    edi
        push    0x2C
        mov     ecx, esi
        call    dword ptr [eax + 0x14]  ; virtual call
        mov     edi, [ebx+8]
        push    0
        lea     ecx, [ebp+0xB]
        push    ecx
        push    0x776AE0
        mov     ecx, edi
        mov     byte ptr [ebp+0xB], 0
        // extern-symbol call
        call FUN_100411e97
        mov     edx, [esi]
        push    1
        lea     eax, [ebp+0xB]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]  ; virtual call
        push    1
        lea     ecx, [ebp-8]
        push    ecx
        push    0x776AD4
        mov     ecx, edi
        // extern-symbol call
        call FUN_100411ba8
        mov     edx, [ebp-8]
        push    0
        push    edx
        lea     ecx, [ebp-0x7C]
        // extern-symbol call
        call FUN_10041de2a
        mov     eax, [ebp-0x58]
        push    0
        push    eax
        lea     ecx, [ebp-0x4C]
        // extern-symbol call
        call FUN_1004d1f9c
        mov     eax, [ebp-0x10]
        test    eax, eax
        je      skip_geom_check
        mov     eax, [ebp-0x30]
        test    eax, eax
        jbe     skip_geom_check
        lea     ecx, [ebp-0x4C]
        // extern-symbol call
        call FUN_1004d2476
        test    al, al
        je      skip_geom_check
        lea     ecx, [ebp-0x4C]
        // extern-symbol call
        call FUN_1004d25aa
        test    al, al
        jne     done_geom
        // extern-symbol memory deref
        mov ecx, dword ptr [DAT_007db0b0]
        push    ecx
        lea     ecx, [ebp-0x4C]
        // extern-symbol call
        call FUN_1004d27a7
        jmp     done_geom

skip_geom_check:
        lea     ecx, [ebp-0xB4]
        // extern-symbol call
        call FUN_100412a8a
        lea     edx, [ebp-0x7C]
        push    edx
        lea     ecx, [ebp-0xB4]
        // extern-symbol call
        call FUN_100412b3b
        lea     eax, [ebp-0xB4]
        push    eax
        lea     ecx, [ebp-0x7C]
        push    ecx
        lea     ecx, [ebp-0x4C]
        // extern-symbol call
        call FUN_1004d25b8
        lea     ecx, [ebp-0x4C]
        // extern-symbol call
        call FUN_1004d2560
        test    al, al
        jne     skip_log
        // extern-symbol memory deref
        mov ecx, dword ptr [DAT_007db0b0]
        lea     edx, [ebp-0xB4]
        push    edx
        // extern-symbol call
        call FUN_100412d8a

skip_log:
        lea     ecx, [ebp-0xB4]
        // extern-symbol call
        call FUN_100412a6f

done_geom:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp-0xC]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]  ; virtual call
        push    ebx
        // extern-symbol call
        call FUN_10050314c
        add     esp, 4
        push    0
        lea     edx, [ebp-4]
        push    edx
        test    eax, eax
        push    0x776ACC
        mov     ecx, edi
        setne   bl
        mov     dword ptr [ebp-4], 0x3F800000
        // extern-symbol call
        call FUN_100411c3b
        fld     dword ptr [ebp-4]
        // extern-symbol FPU compare
        fcomp dword ptr [DAT_0076d5ec]
        fnstsw  ax
        test    ah, 1
        je      scale_ok
        fld     dword ptr [ebp-4]
        mov     eax, [edi+0x14]
        mov     ecx, [edi+0x10]
        mov     edx, [ecx]
        sub     esp, 8
        fstp    qword ptr [esp]
        push    eax
        push    edx
        push    0x776AA0
        // extern-symbol call
        call FUN_006faa3e
        add     esp, 0x14
        test    eax, eax
        je      skip_int3
        int     3

skip_int3:
        xor     bl, bl

scale_ok:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp-4]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]  ; virtual call
        // extern-symbol memory deref
        mov eax, dword ptr [DAT_007dc814]
        neg     bl
        lea     ecx, [ebp-0x4C]
        sbb     ebx, ebx
        and     ebx, eax
        // extern-symbol call
        call FUN_1004d2044
        lea     ecx, [ebp-0x7C]
        // extern-symbol call
        call FUN_10041dd3c
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
