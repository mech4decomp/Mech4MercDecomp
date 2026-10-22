/*
 * FUN_0054f090 (275 B) — Iterator-based search/filter function.
 *
 * Iterates through a collection using FUN_00416bc0/FUN_00416cc0/FUN_00416c80
 * iterator pattern, filtering items based on flags at offset 0x10 and
 * a condition at [this+0xe0]->0x14. Adds matching items via FUN_0041fcd0.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00416bc0(int param);
extern int __stdcall FUN_0041fd80(void);
extern int __stdcall FUN_00416d00(void);
extern int __stdcall FUN_00416cc0(void);
extern void __stdcall FUN_00416c80(void);
extern void __stdcall FUN_00416c60(void);
extern void __stdcall FUN_0041fcb0(void);
extern void __stdcall FUN_0041fcd0(int param);

__declspec(naked) void __stdcall FUN_0054f090(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x14
        mov eax, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        push    ebx
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    edi
        add     edx, 0x4b0
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00416bc0
        lea     edi, [esi + 0x5b0]
        mov     ecx, edi
        mov     dword ptr [esp + 0x0c], 0x0077d098
        call    FUN_0041fd80
        test    eax, eax
        jnz     label_0x54f0ef
        lea     ecx, [esp + 0x0c]
        call    FUN_00416d00
        test    eax, eax
        jz      label_0x54f193
        push    eax
        jmp     label_0x54f18c

label_0x54f0ef:
        lea     ecx, [esp + 0x0c]
        xor     bl, bl
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      label_0x54f136

label_0x54f100:
        test    bl, bl
        jz      label_0x54f11a
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x01
        jnz     label_0x54f11a
        mov     ecx, dword ptr [esi + 0x0e0]
        cmp     dword ptr [ecx + 0x14], 0x01
        jnz     label_0x54f184

label_0x54f11a:
        mov     ecx, edi
        call    FUN_0041fd80
        cmp     eax, esi
        jnz     label_0x54f127
        mov     bl, 0x01

label_0x54f127:
        lea     ecx, [esp + 0x0c]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     label_0x54f100

label_0x54f136:
        lea     ecx, [esp + 0x0c]
        call    FUN_00416c80
        lea     ecx, [esp + 0x0c]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jz      label_0x54f193

label_0x54f14e:
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        test    dl, 0x01
        jnz     label_0x54f165
        mov     eax, dword ptr [esi + 0x0e0]
        cmp     dword ptr [eax + 0x14], 0x01
        jnz     label_0x54f184

label_0x54f165:
        lea     ecx, [esp + 0x0c]
        call    FUN_00416cc0
        mov     esi, eax
        test    esi, esi
        jnz     label_0x54f14e
        lea     ecx, [esp + 0x0c]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret

label_0x54f184:
        mov     ecx, edi
        call    FUN_0041fcb0
        push    esi

label_0x54f18c:
        mov     ecx, edi
        call    FUN_0041fcd0

label_0x54f193:
        lea     ecx, [esp + 0x0c]
        call    FUN_00416c60
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret
    }


}
