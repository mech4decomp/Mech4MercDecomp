/*
 * FUN_005ffcd0 (555 B) — __thiscall (ECX=this, RET 0xC). Weapon/mech render
 * dispatch: validates via obfuscated globals (0x007dab44 ^ 0x007dab40) and
 * FUN_00415230, then drives a chain of 0x0064e6xx/0x0064dfxx helpers,
 * linked-list scans (FUN_005faef0), and virtual calls through vtable slots
 * (+0x18/+0x20). Frees a buffer via FUN_004084e0 at the end.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007f26b0;

extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00600940(void);
extern void __cdecl FUN_0064e600(void);
extern void __cdecl FUN_0064e320(void);
extern void __cdecl FUN_0064e5a0(void);
extern void __cdecl FUN_005faef0(void);
extern void __cdecl FUN_00580670(void);
extern void __cdecl FUN_00580580(void);
extern void __cdecl FUN_0064dfc0(void);
extern void __cdecl FUN_0064e110(void);
extern void __cdecl FUN_0064df60(void);
extern void __cdecl FUN_0065e460(void);
extern void __cdecl FUN_0064de40(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_005ffcd0(void)
{
    __asm {
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [esp+0x14]
        test    ebx, ebx
        push    esi
        jz      LFEF3
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x20]
        xor     ecx, 0x85739531
        jz      LFEF3
        mov     ecx, dword ptr [g_007f26b0]
        mov     edx, dword ptr [eax+0x20]
        xor     edx, 0x85739531
        push    ecx
        mov     ecx, dword ptr [edx+0x4]
        call    FUN_00415230
        cmp     al, 0x1
        jnz     LFEF3
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x20]
        xor     ecx, 0x85739531
        call    FUN_00600940
        mov     esi, eax
        mov     eax, dword ptr [esp+0x1c]
        cmp     eax, 0x8
        jnz     LD51
        mov     dl, byte ptr [esp+0x20]
        xor     eax, eax
        test    dl, dl
        setnz   al
        inc     eax
        jmp     LD56
LD51:
        add     eax, 0x3b6
LD56:
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp+0x1c], eax
        call    FUN_0064e600
        test    al, al
        jnz     LD73
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        push    ebx
        mov     ecx, esi
        call    FUN_0064e320
LD73:
        mov     edx, dword ptr [esp+0x18]
        push    edx
        mov     ecx, esi
        call    FUN_0064e600
        test    al, al
        jz      LFEF3
        mov     eax, dword ptr [esp+0x18]
        push    ebp
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_0064e5a0
        mov     ecx, ebx
        mov     ebp, eax
        call    FUN_005faef0
        mov     edi, dword ptr [eax+0x4]
        mov     ecx, ebx
        call    FUN_005faef0
        mov     esi, dword ptr [eax]
        cmp     esi, edi
        jz      LDBD
        mov     eax, dword ptr [esp+0x20]
LDB2:
        cmp     dword ptr [esi], eax
        jz      LDBD
        add     esi, 0x4
        cmp     esi, edi
        jnz     LDB2
LDBD:
        mov     ecx, ebx
        call    FUN_005faef0
        cmp     esi, dword ptr [eax+0x4]
        jnz     LDF9
        mov     ecx, ebx
        call    FUN_005faef0
        mov     edx, dword ptr [eax+0x4]
        cmp     edx, dword ptr [eax+0x8]
        jz      LDEA
        test    edx, edx
        jz      LDE2
        mov     ecx, dword ptr [esp+0x20]
        mov     dword ptr [edx], ecx
LDE2:
        add     edx, 0x4
        mov     dword ptr [eax+0x4], edx
        jmp     LDF9
LDEA:
        push    0x1
        lea     ecx, [esp+0x24]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_00580670
LDF9:
        lea     edx, [esp+0x24]
        xor     esi, esi
        push    edx
        lea     eax, [esp+0x2c]
        push    eax
        lea     ecx, [esp+0x20]
        mov     dword ptr [esp+0x18], esi
        mov     dword ptr [esp+0x1c], esi
        mov     dword ptr [esp+0x2c], esi
        call    FUN_00580580
        lea     ecx, [esp+0x10]
        push    ecx
        mov     ecx, ebp
        call    FUN_0064dfc0
        mov     eax, dword ptr [esp+0x10]
        mov     ecx, dword ptr [esp+0x14]
        cmp     eax, ecx
        jz      LE41
LE32:
        cmp     dword ptr [eax], ebx
        jz      LE3D
        add     eax, 0x4
        cmp     eax, ecx
        jnz     LE32
LE3D:
        cmp     eax, ecx
        jnz     LE4C
LE41:
        mov     edx, dword ptr [ebx+0x30]
        push    edx
        mov     ecx, ebp
        call    FUN_0064e110
LE4C:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0xc]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx+0x17]
        test    al, al
        jnz     LEE0
        mov     ecx, ebp
        call    FUN_0064df60
        test    eax, eax
        jz      LE89
        mov     ecx, ebp
        call    FUN_0064df60
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        cmp     eax, 0xfa1
        jz      LEE0
LE89:
        lea     eax, [esp+0x28]
        push    0xfa1
        push    eax
        call    FUN_0065e460
        add     esp, 0x8
        lea     ecx, [esp+0x28]
        push    ecx
        mov     ecx, ebp
        call    FUN_0064de40
        mov     ecx, dword ptr [esp+0x28]
        mov     edx, ecx
        and     edx, 0x1
        cmp     dl, 0x1
        jnz     LEE0
        mov     eax, ecx
        and     eax, 0x2
        cmp     al, 0x2
        jnz     LED0
        and     ecx, 0xfffffffc
        mov     dword ptr [esp+0x28], ecx
        jz      LEE0
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx+0x18]
        jmp     LEE0
LED0:
        and     ecx, 0xfffffffc
        mov     dword ptr [esp+0x28], ecx
        jz      LEE0
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax+0x18]
LEE0:
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, esi
        pop     edi
        pop     ebp
        jz      LFEF3
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
LFEF3:
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     0xc
    }
}
