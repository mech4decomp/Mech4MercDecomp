// FUN_00542B00 (693 bytes)
// __thiscall (ECX = this, stack params at ESP+0x160 and ESP+0x15c)
// RET 0x08 - decal transfer processing function
__declspec(naked) void func_00542b00(void)
{
    

extern void __cdecl FUN_10041ee55(void);
extern void __cdecl FUN_1004124ec(void);
extern void __cdecl FUN_100412933(void);
extern void __cdecl FUN_1004124d1(void);
extern void __cdecl FUN_10041252e(void);
extern void __cdecl FUN_100412680(void);
extern void __cdecl FUN_10040d8e7(void);
extern void __cdecl FUN_10040d8de(void);
extern void __cdecl FUN_10041248c(void);
extern void __cdecl FUN_1004124e9(void);
extern void __cdecl FUN_10041263b(void);
extern void __cdecl FUN_1004083c3(void);
extern void __cdecl FUN_1004083a8(void);
extern void __cdecl FUN_1005326d9(void);
extern void __cdecl FUN_100532514(void);
extern void __cdecl FUN_1005326b6(void);
extern void __cdecl FUN_1005324f1(void);
extern void __cdecl FUN_100532693(void);
extern void __cdecl FUN_1005324ce(void);
extern void __cdecl FUN_10041ee7c(void);
extern void __cdecl FUN_10041ee69(void);
extern void __cdecl FUN_100408301(void);
extern void __cdecl FUN_1004082e6(void);
extern void __cdecl FUN_1004082cb(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern void __cdecl FUN_1004cdefa(void);
extern void __cdecl FUN_10041ecc1(void);
__asm {
sub     esp, 0x14c
        push    ebx
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0xec]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      skip_all
        push    esi
        push    ebx
        lea     ecx, [esp + 0x34]
        call FUN_10041ee55
        mov     esi, dword ptr [esp + 0x160]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call dword ptr [eax + 0x08]
        test    eax, eax
        jz      calc_diff

loop_top:
        mov     edx, dword ptr [esi]
        push    0x01
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x14], ebx
        mov     byte ptr [esp + 0x60], bl
        call dword ptr [edx + 0x20]
        mov     edx, dword ptr [esi]
        push    0x01
        lea     eax, [esp + 0x1c]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x20], ebx
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x0c]
        cmp     eax, ebx
        jz      skip_read
        mov     edx, dword ptr [esi]
        push    eax
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call dword ptr [edx + 0x20]
        mov     eax, dword ptr [esp + 0x0c]

skip_read:
        lea     ecx, [esp + 0x58]
        push    ecx
        lea     ecx, [esp + 0x20]
        mov     byte ptr [esp + eax*0x1 + 0x5c], bl
        call FUN_1004124ec
        lea     ecx, [esp + 0x1c]
        call FUN_100412933
        push    0x77b6b0
        lea     ecx, [esp + 0x2c]
        mov     dword ptr [esp + 0x18], ebx
        call FUN_1004124d1
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x28]
        push    edx
        push    eax
        lea     ecx, [esp + 0x28]
        call FUN_10041252e
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x18]
        call FUN_100412680
        lea     ecx, [esp + 0x20]
        call FUN_10040d8e7
        lea     ecx, [esp + 0x28]
        call FUN_10040d8de
        push    0x779ff0
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x14], ebx
        call FUN_10041248c
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x24]
        push    edx
        push    eax
        lea     ecx, [esp + 0x34]
        call FUN_1004124e9
        lea     ecx, [esp + 0x2c]
        push    ecx
        lea     ecx, [esp + 0x14]
        call FUN_10041263b
        mov     eax, dword ptr [esp + 0x2c]
        cmp     eax, ebx
        jz      skip_refcount1
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount1
        push    eax
        call FUN_1004083c3
        add     esp, 0x04

skip_refcount1:
        mov     eax, dword ptr [esp + 0x24]
        cmp     eax, ebx
        jz      skip_refcount2
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount2
        push    eax
        call FUN_1004083a8
        add     esp, 0x04

skip_refcount2:
        lea     edx, [esp + 0x58]
        push    edx
        mov     ecx, edi
        call FUN_1005326d9
        test    al, al
        jz      check_second
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    ecx
        mov     ecx, edi
        call FUN_100532514
        jmp     cleanup_strings

check_second:
        mov     edx, dword ptr [esp + 0x14]
        push    edx
        mov     ecx, edi
        call FUN_1005326b6
        test    al, al
        jz      check_third
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov     ecx, edi
        call FUN_1005324f1
        jmp     cleanup_strings

check_third:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     ecx, edi
        call FUN_100532693
        test    al, al
        jz      use_default
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     ecx, edi
        call FUN_1005324ce
        jmp     cleanup_strings

use_default:
        push    0x01
        lea     edx, [esp + 0x10]
        push    edx
        lea     ecx, [esp + 0x38]
        call FUN_10041ee7c
        mov     eax, dword ptr [esp + 0x0c]
        push    eax
        lea     ecx, [esp + 0x5c]
        push    ecx
        lea     ecx, [esp + 0x38]
        call FUN_10041ee69

cleanup_strings:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      skip_refcount3
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount3
        push    eax
        call FUN_100408301
        add     esp, 0x04

skip_refcount3:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      skip_refcount4
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount4
        push    eax
        call FUN_1004082e6
        add     esp, 0x04

skip_refcount4:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        jz      skip_refcount5
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_refcount5
        push    eax
        call FUN_1004082cb
        add     esp, 0x04

skip_refcount5:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call dword ptr [edx + 0x08]
        test    eax, eax
        jnz     loop_top

calc_diff:
        mov     eax, dword ptr [esp + 0x48]
        sub     eax, dword ptr [esp + 0x40]
        jz      skip_update
        mov ebx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esp + 0x15c]
        lea     ecx, [eax*0x8 + 0x0]
        mov eax, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [eax]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0x14]
        add     edx, 0x14
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     ebx, dword ptr [eax + esi*0x4 + 0x3c44]
        add     eax, 0x3c3c
        add     ebx, ecx
        mov     dword ptr [eax + esi*0x4 + 0x08], ebx
        mov     edi, dword ptr [eax + 0xc00]
        add     edi, ecx
        push    0x01
        lea     ecx, [esp + 0x34]
        push    ecx
        mov     ecx, dword ptr [edx]
        push    0x25
        push    esi
        xor     ecx, 0x85739531
        mov     dword ptr [eax + 0xc00], edi
        call FUN_1004cdefa

skip_update:
        lea     ecx, [esp + 0x30]
        call FUN_10041ecc1
        pop     esi

skip_all:
        pop     edi
        pop     ebx
        add     esp, 0x14c
        ret     0x08
    }


}
