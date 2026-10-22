/*
 * FUN_0054f1d0 (206 B) — Iterator-based search/insert function.
 *
 * Iterates through a collection, checks flags at offset 0x10 and
 * condition at [this+0xe0]->0x14, clears existing items via
 * FUN_0041fcb0, then adds the matching item via FUN_0041fcd0.
 *
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_0041fd80(void);
extern void __stdcall FUN_00416bc0(int param);
extern int __stdcall FUN_00416d00(void);
extern void __stdcall FUN_00416c60(void);
extern void __stdcall FUN_0041fcd0(int param);
extern void __stdcall FUN_0041fcb0(void);
extern char __stdcall FUN_006f18c0(int *param);

__declspec(naked) void __stdcall FUN_0054f1d0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x18
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov ebx, dword ptr [DAT_007dab40]
        push    esi
        xor     eax, ebx
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, dword ptr [eax + 0x24]
        lea     ebx, [ecx + 0x5b0]
        mov     ecx, ebx
        xor     esi, 0x85739531
        xor     edi, 0x85739531
        mov     dword ptr [esp + 0x0c], 0x00000000
        call    FUN_0041fd80
        test    eax, eax
        jnz     label_0x54f245
        add     esi, 0x4b0
        push    esi
        lea     ecx, [esp + 0x14]
        call    FUN_00416bc0
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x0077d098
        call    FUN_00416d00
        test    eax, eax
        jz      label_0x54f23c
        push    eax
        mov     ecx, ebx
        call    FUN_0041fcd0

label_0x54f23c:
        lea     ecx, [esp + 0x10]
        call    FUN_00416c60

label_0x54f245:
        lea     ecx, [esp + 0x0c]
        push    ecx
        mov     ecx, edi
        call    FUN_006f18c0
        test    al, al
        jz      label_0x54f297
        mov     eax, dword ptr [esp + 0x0c]
        mov     edx, dword ptr [eax + 0x10]
        shr     edx, 0x13
        test    dl, 0x01
        mov     esi, eax
        jnz     label_0x54f297
        mov     eax, dword ptr [eax + 0x0e0]
        cmp     dword ptr [eax + 0x14], 0x01
        jz      label_0x54f297
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jz      label_0x54f28f

label_0x54f27d:
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     ecx, ebx
        call    FUN_0041fd80
        test    eax, eax
        jnz     label_0x54f27d

label_0x54f28f:
        push    esi
        mov     ecx, ebx
        call    FUN_0041fcd0

label_0x54f297:
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret
    }


}
