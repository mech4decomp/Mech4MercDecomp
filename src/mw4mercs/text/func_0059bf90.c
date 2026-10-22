/*
 * FUN_0059BF90 (139 B) — __thiscall method, RET 0xC (3 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040F060(void);
extern int __cdecl FUN_0059BC80(void);
extern void __cdecl FUN_004179B0(void);
extern int __cdecl FUN_0059BDA0(void);
extern void __cdecl FUN_004084E0(int);

__declspec(naked) void FUN_0059BF90(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx                    ; esi = this
        push    1
        push    ecx
        lea     eax, [esp + 0x14]           ; address of param3 on stack
        mov     ecx, esp                    ; ecx = address of temp struct on stack
        push    eax
        call    FUN_0040F060                ; copy pointer with ref count
        mov     ecx, esi
        call    FUN_0059BC80                ; call method on this
        test    eax, eax
        je      L_skip_setup

        mov     ecx, [esp + 8]              ; param2
        test    ecx, ecx
        mov     [eax + 0x1C], ecx           ; store param2 in object
        je      L_use_alternate

        ; param2 is non-zero path
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x44]
        xor     ecx, 0x85739531
        mov     edx, [ecx + 0x1C]
        mov     ecx, [edx + 0x28]
        mov     [eax + 0x4C], ecx
        push    eax
        lea     ecx, [esi + 0x18]
        call    FUN_004179B0
        jmp     L_skip_setup

    L_use_alternate:
        mov     edx, [esp + 0x10]           ; param3
        push    edx
        push    ecx
        lea     eax, [esp + 0x14]
        mov     ecx, esp
        push    eax
        call    FUN_0040F060
        mov     ecx, esi
        call    FUN_0059BDA0

    L_skip_setup:
        mov     eax, [esp + 0x0C]           ; param3 (original)
        test    eax, eax
        je      L_skip_free
        mov     cl, [eax - 1]               ; ref count byte
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     L_skip_free
        push    eax
        call    FUN_004084E0                ; free
        add     esp, 4

    L_skip_free:
        pop     esi
        ret     0x0C
    }


}
