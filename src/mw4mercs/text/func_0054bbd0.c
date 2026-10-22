/*
 * FUN_0054bbd0 (409 B) — __fastcall method on a large object (0x588+ bytes).
 * Called with ECX = this pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_0054bbd0(void)
{
    

extern void __cdecl FUN_00559bdd(void);
extern void __cdecl FUN_0055854f(void);
extern int DAT_0077b98c;
extern int DAT_0077d030;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_005599b9(void);
extern void __cdecl FUN_00627a82(void);
extern void __cdecl FUN_00627449(void);
extern void __cdecl FUN_0062910d(void);
__asm {
push    ecx
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx

        push    0x0C
        call FUN_00559bdd

        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]
        mov     ecx, dword ptr [esi + 0xE0]
        mov     edi, eax
        cmp     dword ptr [ecx + 0x14], 5
        jz      L_0054BD64

        mov     eax, dword ptr [esi + 0x564]
        cmp     eax, 3
        jz      L_0054BC51

        mov     edx, dword ptr [esi + 0x518]
        mov     ecx, dword ptr [esi + 0x520]
        mov     dword ptr [esi + 0x568], eax
        mov     eax, dword ptr [esi + 0x51C]
        mov     dword ptr [esi + 0x56C], edx
        mov     dword ptr [esi + 0x570], eax
        mov     edx, dword ptr [esi + 0x528]
        mov     dword ptr [esi + 0x57C], edx
        mov     eax, dword ptr [esi + 0x524]
        mov     dword ptr [esi + 0x574], ecx
        mov     ecx, dword ptr [esi + 0x52C]
        mov     dword ptr [esi + 0x578], eax
        mov     dword ptr [esi + 0x580], ecx

L_0054BC51:
        push    edi
        push    3
        mov     ecx, esi
        call FUN_0055854f

        fld dword ptr [DAT_0077b98c]

        mov     ecx, dword ptr [edi + 0x2C]

        fmul dword ptr [DAT_0077d030]

        mov     edx, dword ptr [edi + 0x24]
        mov     eax, dword ptr [edi + 0x28]
        mov     dword ptr [esi + 0x518], edx
        xor     ebx, ebx
        mov     dword ptr [esi + 0x520], ecx
        mov     ecx, dword ptr [esi + 0xE0]
        mov     edx, dword ptr [ecx]
        push    ebx
        mov     dword ptr [esi + 0x528], ebx
        fstp    dword ptr [esi + 0x524]
        push    5
        mov     dword ptr [esi + 0x51C], eax
        mov     dword ptr [esi + 0x52C], ebx
        call    dword ptr [edx + 4]

        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]

        mov edx, dword ptr [DAT_007dab40]

        mov     al, byte ptr [esi + 0x32E]
        xor     ecx, edx
        add     ecx, 0x40
        cmp     al, bl
        mov     dword ptr [esp + 0x0C], ecx
        jz      L_0054BCD1

        mov     ecx, esi
        mov     byte ptr [esi + 0x32E], bl
        call FUN_005599b9

L_0054BCD1:
        cmp     byte ptr [esi + 0x32F], bl
        jz      L_0054BD08

        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]
        mov     byte ptr [esi + 0x32F], bl

        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_0054BD08

        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call FUN_00627a82

L_0054BD08:
        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]

        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x40]
        add     eax, 0x40
        xor     ecx, 0x85739531
        jz      L_0054BD64

        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call FUN_00627449

        mov edx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [edx]

        xor eax, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax + 0x0C]
        xor     ecx, 0x85739531
        cmp     byte ptr [ecx + 0x17], bl
        jz      L_0054BD64

        mov     ecx, dword ptr [eax + 0x40]
        push    0x0D
        xor     ecx, 0x85739531
        call FUN_0062910d

        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x10]

L_0054BD64:
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }


}
