/*
 * FUN_005af490 (330 B) — __thiscall (ECX = this), RET.
 * If flag at this+0x176 set and the 4-byte key at this+0x168 differs from
 * the global key, rebuild a resource/object and dispatch through vtables.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004d1f80(void *a, int b);
extern unsigned int __stdcall FUN_004da920(void *a);
extern void __stdcall FUN_005347f0(void);
extern void __stdcall FUN_00767400(void *a);
extern void __stdcall FUN_0041e690(void);
extern void *__stdcall FUN_004cec10(void);
extern void *__stdcall FUN_004d9910(void);
extern void __stdcall FUN_004179b0(void *a);
extern void __stdcall FUN_0041e710(void *a);
extern void __stdcall FUN_004d21c0(void *a);

__declspec(naked) void __stdcall FUN_005af490(void)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0xF8
        push    esi
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x176]
        test    al, al
        jz      L5d1
        mov     ax, word ptr [edi + 0x168]
        cmp ax, word ptr [DAT_007db0ac]
        lea     esi, [edi + 0x168]
        jnz     L4cf
        mov     cx, word ptr [esi + 0x2]
        cmp cx, word ptr [DAT_007db0ae]
        jz      L5d1
L4cf:
        push    0x1
        push    esi
        lea     ecx, [esp + 0xC4]
        call    FUN_004d1f80
        push    esi
        call    FUN_004da920
        mov     edx, dword ptr [edi + 0xD8]
        add     esp, 0x4
        push    0x0
        push    -0x1
        push    0x2
        push    0x0
        add     edx, 0x80
        push    edx
        push    esi
        push    0x2
        push    eax
        push    0x0
        push    0x2
        push    0x90
        lea     ecx, [esp + 0x58]
        call    FUN_005347f0
        push    0x8BD5E8
        lea     ecx, [esp + 0x90]
        call    FUN_00767400
        push    0x8BD5E8
        lea     ecx, [esp + 0xA8]
        call    FUN_00767400
        mov     eax, dword ptr [esp + 0x2C]
        push    0x0
        push    eax
        lea     ecx, [esp + 0x34]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0041e690
        mov ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x8], dl
        mov     ax, word ptr [eax + 0x2]
        push    0x0
        lea     ecx, [esp + 0xC]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        mov     word ptr [esp + 0x16], ax
        call    FUN_004d9910
        mov     esi, eax
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x17
        add     esp, 0xC
        test    al, 0x1
        jz      L58a
        mov     byte ptr [edi + 0x176], 0x0
L58a:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x1C]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x28]
        push    esi
        lea     ecx, [edi + 0x178]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x48]
        lea     ecx, [esp + 0xC]
        call    FUN_0041e710
        lea     ecx, [esp + 0xBC]
        call    FUN_004d21c0
L5d1:
        pop     edi
        pop     esi
        add     esp, 0xF8
        ret
    }


}
