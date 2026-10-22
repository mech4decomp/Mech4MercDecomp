/*
 * FUN_00532ab0 (1030 B) — __fastcall initialization function.
 *
 * Sets up mission resource paths, initializes structures, and scans
 * for mission instance files.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

/* extern function declarations */
extern void __fastcall FUN_0052e150(void);
extern void __cdecl FUN_006f4950(int a);
extern void __fastcall FUN_006f17b0(int a, int b);
extern void __fastcall FUN_005330c0(void);
extern void __fastcall FUN_0053beb0(int a, int b);
extern void __cdecl FUN_004084e0(void *ptr);
extern int __cdecl FUN_0061acf0(int a, int b);
extern void __fastcall FUN_0061ad30(void);
extern void __fastcall FUN_00412780(const char *str);
extern int __fastcall FUN_004125e0(const char *a, const char *b);
extern void __fastcall FUN_00412740(const char *str);
extern void __fastcall FUN_0040d9b0(void);
extern int __cdecl FUN_005471f0(void *a);
extern int __cdecl FUN_006fc4d0(int a);
extern int __cdecl FUN_00544620(int a);
extern int __cdecl FUN_005394a0(void);
extern int __fastcall FUN_004cd8e0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void FUN_00532ab0(void)
{
    

extern int DAT_007dd234;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;
extern int DAT_007f293c;
extern int DAT_00858a38;
extern int DAT_007dd268;
__asm {
sub     esp, 0x10
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        mov     byte ptr [edi + 0x5572], 1
        lea     esi, [edi + 0x205f35]
        mov     ebp, 0x18
    loop_start:
        mov     al, byte ptr [esi - 1]
        test    al, al
        jz      loop_skip
        cmp     byte ptr [esi], 0
        jnz     loop_skip
        lea     ecx, [esi + 0xfffffdef]
        call    FUN_0052e150
    loop_skip:
        add     esi, 0x22ac
        dec     ebp
        jnz     loop_start
        mov eax, dword ptr [DAT_007dd234]
        push    eax
        call    FUN_006f4950
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, [edx + 0x24]
        push    0x40080000
        push    0x0
        xor     ecx, 0x85739531
        call    FUN_006f17b0
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, [edx + 0x50]
        mov     ecx, [eax + 0x10]
        test    ecx, ecx
        jnz     skip_init
        mov     ecx, edi
        call    FUN_005330c0
        mov     byte ptr [edi + 0x5571], 1
    skip_init:
        mov edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        push    0x0
        push    ecx
        mov     ecx, edi
        call    FUN_0053beb0
        mov eax, dword ptr [DAT_007f293c]
        test    eax, eax
        mov dword ptr [DAT_00858a38], 0x538000
        jz      skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    skip_free1:
        push    0x1
        push    0xffff
        call    FUN_0061acf0
        mov     ecx, eax
        call    FUN_0061ad30
        push    0x779cb0
        lea     ecx, [esp + 0x18]
        mov     dword ptr [esp + 0x18], 0x0
        call    FUN_00412780
        mov eax, dword ptr [DAT_007dd268]
        mov     eax, [eax + 0x40970]
        mov     ecx, [esp + 0x14]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     edx, [esp + 0x14]
        push    0x779f4c
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x18]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        push    0x779d68
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x0
        call    FUN_00412780
        mov eax, dword ptr [DAT_007dd268]
        mov     eax, [eax + 0x40970]
        mov     ecx, [esp + 0x10]
        push    eax
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     edx, [esp + 0x10]
        push    0x779f4c
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        lea     eax, [esp + 0x14]
        push    eax
        call    FUN_005471f0
        lea     ecx, [esp + 0x10]
        push    ecx
        call    FUN_005471f0
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_005471f0
        lea     eax, [esp + 0x10]
        push    eax
        call    FUN_005471f0
        push    0x779e34
        lea     ecx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], 0x0
        call    FUN_00412780
        mov ecx, dword ptr [DAT_007dd268]
        mov     eax, [ecx + 0x40970]
        mov     edx, [esp + 0xc]
        push    eax
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     eax, [esp + 0xc]
        push    0x76c5a8
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov ecx, dword ptr [DAT_007dd268]
        mov     eax, [ecx + 0x40970]
        mov     edx, [esp + 0xc]
        push    eax
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     eax, [esp + 0xc]
        push    0x776484
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     ecx, [esp + 0x10]
        push    ecx
        call    FUN_006fc4d0
        test    al, al
        jz      skip_usermissions
        push    0x77a378
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov edx, dword ptr [DAT_007dd268]
        mov     eax, [edx + 0x40970]
        push    eax
        mov     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     ecx, [esp + 0xc]
        push    0x76c5a8
        push    ecx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
        mov     edx, [esp + 0xc]
        push    0x776484
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        lea     ecx, [esp + 0x18]
        call    FUN_0040d9b0
    skip_usermissions:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, [ecx]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, [esp + 0xc]
        xor     edx, ecx
        mov     ecx, [edx + 0xc]
        push    eax
        xor     ecx, 0x85739531
        call    FUN_00544620
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, [ecx + 0xc]
        xor     ecx, 0x85739531
        call    FUN_005394a0
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cd8e0
        test    al, al
        jz      loop_done
    loop_wait:
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cd8e0
        test    al, al
        jnz     loop_wait
    loop_done:
        call    FUN_006f49a0
        mov     eax, [esp + 0xc]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        jz      skip_free2
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    skip_free2:
        mov     eax, [esp + 0x4]
        test    eax, eax
        jz      skip_free3
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    skip_free3:
        mov     eax, [esp + 0x8]
        test    eax, eax
        jz      skip_free4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    skip_free4:
        add     esp, 0x10
        ret
    }


}
