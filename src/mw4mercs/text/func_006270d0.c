/*
 * FUN_006270d0 (431 B) — ABL interpreter object initializer (__thiscall,
 * RET 0x8). Sets up the object from a source object (param_1): copies
 * pointers/state, calls virtual methods on the source's sub-objects to
 * fetch data, and formats a numeric id string via _itoa (IAT 0x76b2d4).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f1f84;
extern void *g_0076b2d4;

extern void __cdecl FUN_00626970(void);
extern void __cdecl FUN_00630cc0(void);
extern void __cdecl FUN_006275a0(void);
extern void __cdecl FUN_00627530(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_0063dfd0(void);
extern void __cdecl FUN_00628330(void);
extern void __cdecl FUN_00560420(void);

__declspec(naked) void FUN_006270d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        sub     esp, 0xc
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00626970
        mov     ecx, dword ptr [esi + 0x50]
        xor     ebx, ebx
        cmp     ecx, ebx
        jz      LAB_6270f0
        call    FUN_00630cc0

LAB_6270f0:
        mov     edi, dword ptr [esp + 0x1c]
        cmp     edi, ebx
        mov     dword ptr [esi + 0x164], edi
        mov     byte ptr [esi + 0x168], bl
        jnz     LAB_627142
        mov     ecx, esi
        mov     dword ptr [esi + 0x70], ebx
        call    FUN_006275a0
        mov     ecx, esi
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [esi + 0x98], ebx
        mov     dword ptr [esi + 0x8c], ebx
        mov     dword ptr [esi + 0x90], ebx
        mov     dword ptr [esi + 0x84], ebx
        mov     dword ptr [esi + 0x88], ebx
        call    FUN_00627530
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     0x8

LAB_627142:
        mov     edx, dword ptr [edi + 0x78]
        lea     ecx, [edi + 0x78]
        call    dword ptr [edx + 0x4]
        mov     ecx, dword ptr [edi + 0x410]
        mov     edx, dword ptr [edi + 0x40c]
        mov     eax, dword ptr [eax + 0x2bc]
        sub     ecx, edx
        sar     ecx, 0x2
        mov     dword ptr [esi + 0x70], eax
        mov     byte ptr [esi + 0x16a], bl
        jz      LAB_62718d
        mov     eax, dword ptr [edx]
        cmp     eax, ebx
        jz      LAB_62718d
        lea     ecx, [eax + 0x78]
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x4]
        mov     ecx, dword ptr [eax + 0x63c]
        mov     edx, dword ptr [eax + 0x640]
        mov     dword ptr [esi + 0x68], ecx
        mov     dword ptr [esi + 0x6c], edx

LAB_62718d:
        mov     eax, dword ptr [g_007f1f84]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        mov     dword ptr [esi + 0x94], ebx
        mov     dword ptr [esi + 0x98], ebx
        call    FUN_00415230
        test    al, al
        jz      LAB_6271fd
        lea     eax, [edi + 0x944]
        mov     dword ptr [esi + 0x84], eax
        lea     eax, [edi + 0x30c]
        cmp     eax, ebx
        mov     dword ptr [esi + 0x88], eax
        jz      LAB_6271d5
        mov     ecx, dword ptr [esi + 0x128]
        push    0x1
        push    eax
        call    FUN_0063dfd0

LAB_6271d5:
        mov     eax, dword ptr [edi + 0x99c]
        cmp     eax, ebx
        jz      LAB_6271fd
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x1c0]
        mov     dword ptr [esi + 0x94], ecx
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x38]
        fstp    dword ptr [esi + 0x98]

LAB_6271fd:
        mov     ecx, esi
        mov     dword ptr [esi + 0xe4], ebx
        mov     dword ptr [esi + 0xe8], ebx
        mov     dword ptr [esi + 0xec], 0xbf800000
        call    FUN_00628330
        mov     edi, dword ptr [edi + 0x408]
        lea     eax, [edi + 0x20]
        add     edi, 0x1c
        push    0xa
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     dword ptr [esi + 0x8c], edi
        mov     edi, dword ptr [esi + 0x108]
        push    ebx
        mov     dword ptr [esi + 0x90], eax
        mov     dword ptr [edi + 0x50], ebx
        call    dword ptr [g_0076b2d4]
        mov     ecx, dword ptr [edi + 0x110]
        add     esp, 0xc
        push    ebx
        push    ebx
        lea     edx, [esp + 0x14]
        push    edx
        call    FUN_00560420
        mov     eax, 0x2
        mov     ecx, esi
        mov     dword ptr [esi + 0x3c], eax
        mov     dword ptr [esi + 0x40], eax
        mov     byte ptr [esi + 0x16b], bl
        call    FUN_00627530
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0xc
        ret     0x8
    }
}
