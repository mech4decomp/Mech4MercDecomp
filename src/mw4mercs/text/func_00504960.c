/*
 * FUN_00504960 (346 B) — Geometry scale validation/application (FPO variant)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_00504960(void)
{
    

/* extern data/function symbols */
extern void __cdecl FUN_100411e94(void);
extern void __cdecl FUN_100411ba3(void);
extern void __cdecl FUN_10041de23(void);
extern void __cdecl FUN_1004d1f93(void);
extern void __cdecl FUN_1004d246a(void);
extern void __cdecl FUN_1004d259d(void);
extern int DAT_007db0b0;
extern void __cdecl FUN_1004d2799(void);
extern void __cdecl FUN_100412a7b(void);
extern void __cdecl FUN_100412b2a(void);
extern void __cdecl FUN_1004d25a4(void);
extern void __cdecl FUN_1004d254b(void);
extern void __cdecl FUN_100412d74(void);
extern void __cdecl FUN_100412a58(void);
extern void __cdecl FUN_100503134(void);
extern int DAT_007dc82c;
extern void __cdecl FUN_1004d2085(void);
extern void __cdecl FUN_10041dd7c(void);
__asm {
sub     esp, 0xB4
        push    ebx
        mov     ebx, [esp+0xBC]
        push    esi
        mov     esi, [ebx]
        mov     eax, [esi]
        push    edi
        push    0x2C
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        mov     edi, [ebx+8]
        push    0
        lea     ecx, [esp+0x13]
        push    ecx
        push    0x776AE0
        mov     ecx, edi
        mov     byte ptr [esp+0x1B], 0
        call FUN_100411e94
        mov     edx, [esi]
        push    1
        lea     eax, [esp+0x13]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    1
        lea     ecx, [esp+0x14]
        push    ecx
        push    0x776AD4
        mov     ecx, edi
        call FUN_100411ba3
        mov     edx, [esp+0x10]
        push    0
        push    edx
        lea     ecx, [esp+0x60]
        call FUN_10041de23
        mov     eax, [esp+0x7C]
        push    0
        push    eax
        lea     ecx, [esp+0x1C]
        call FUN_1004d1f93
        mov     eax, [esp+0x50]
        test    eax, eax
        je      skip_geom_check
        mov     eax, [esp+0x30]
        test    eax, eax
        jbe     skip_geom_check
        lea     ecx, [esp+0x14]
        call FUN_1004d246a
        test    al, al
        je      skip_geom_check
        lea     ecx, [esp+0x14]
        call FUN_1004d259d
        test    al, al
        jne     done_geom
        mov ecx, dword ptr [DAT_007db0b0]
        push    ecx
        lea     ecx, [esp+0x18]
        call FUN_1004d2799
        jmp     done_geom

skip_geom_check:
        lea     ecx, [esp+0x88]
        call FUN_100412a7b
        lea     edx, [esp+0x58]
        push    edx
        lea     ecx, [esp+0x8C]
        call FUN_100412b2a
        lea     eax, [esp+0x88]
        push    eax
        lea     ecx, [esp+0x5C]
        push    ecx
        lea     ecx, [esp+0x1C]
        call FUN_1004d25a4
        lea     ecx, [esp+0x14]
        call FUN_1004d254b
        test    al, al
        jne     skip_log
        mov ecx, dword ptr [DAT_007db0b0]
        lea     edx, [esp+0x88]
        push    edx
        call FUN_100412d74

skip_log:
        lea     ecx, [esp+0x88]
        call FUN_100412a58

done_geom:
        mov     eax, [esi]
        push    4
        lea     ecx, [esp+0x58]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        push    ebx
        call FUN_100503134
        mov ecx, dword ptr [DAT_007dc82c]
        add     esp, 4
        test    eax, eax
        setne   al
        neg     al
        sbb     eax, eax
        and     eax, ecx
        lea     ecx, [esp+0x14]
        mov     esi, eax
        call FUN_1004d2085
        lea     ecx, [esp+0x58]
        call FUN_10041dd7c
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0xB4
        ret
    }


}
