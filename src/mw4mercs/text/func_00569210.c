/*
 * FUN_00569210 (423 B) — Object lookup/dispatch helper (7-param variant).
 *
 * Takes a uint parameter plus 6 extra params, looks up an object by ID,
 * checks various conditions, and returns a result code (-2 on failure,
 * >=0 on success). Calls FUN_00568ea0 for each collected result.
 *
 * __cdecl, returns int.
 *
 * CFLAGS: /O1
 */

__declspec(naked) int __cdecl FUN_00569210(
    unsigned int param_1,
    int param_2,
    int param_3,
    int param_4,
    int param_5,
    int param_6,
    int param_7)
{
    

extern void __cdecl FUN_00580bb8(void);
extern void __cdecl FUN_100566c4b(void);
extern void __cdecl FUN_0064e5c1(void);
extern void __cdecl FUN_0064e4f1(void);
extern void __cdecl FUN_0064e0a8(void);
extern void __cdecl FUN_0064e09f(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fcaa5(void);
extern int DAT_007f268c;
extern void __cdecl FUN_100415187(void);
extern int DAT_007f24d8;
extern void __cdecl FUN_10041516b(void);
extern void __cdecl FUN_00581264(void);
extern void __cdecl FUN_00580c43(void);
extern void __cdecl FUN_0064dfe9(void);
extern void __cdecl FUN_100568d50(void);
extern void __cdecl FUN_10040836e(void);
extern void __cdecl FUN_100408350(void);
__asm {
sub     esp, 0x0c
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x1c]  /* param_1 */
        xor     eax, eax
        test    esi, 0xf00000
        push    edi
        mov     dword ptr [esp + 0x10], eax  /* local_c = NULL */
        mov     dword ptr [esp + 0x14], eax  /* local_8 = NULL */
        mov     dword ptr [esp + 0x18], eax  /* local_4 = NULL */
        jz      L4a

        /* (param_1 & 0xf00000) != 0 path */
        lea     eax, dword ptr [esp + 0x10]
        push    eax
        add     esi, 0xff100000
        push    esi
        call FUN_00580bb8
        add     esp, 0x8
        jmp     L33a

L4a:
        /* (param_1 & 0xf00000) == 0 path */
        call FUN_100566c4b
        mov     edi, eax
        push    esi
        mov     ecx, edi
        call FUN_0064e5c1
        test    al, al
        jz      L33a
        push    esi
        mov     ecx, edi
        call FUN_0064e4f1
        mov     ebx, eax
        mov     ecx, ebx
        call FUN_0064e0a8
        mov     edi, dword ptr [eax]
        mov     ecx, ebx
        call FUN_0064e09f
        cmp     edi, dword ptr [eax + 0x4]
        jz      L33a

L284:
        /* Loop: iterate through objects */
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        mov ebp, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [edi]
        xor     eax, ebp
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call FUN_1004fcaa5
        mov     esi, eax
        test    esi, esi
        jz      L327
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L327
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_100415187
        cmp     al, 0x1
        jne     L327
        mov     esi, dword ptr [esi + 0x2fc]
        test    esi, esi
        jz      L327
        mov eax, dword ptr [DAT_007f24d8]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call FUN_10041516b
        cmp     al, 0x1
        jne     L327
        mov     al, byte ptr [esi + 0x2f9]
        test    al, al
        jnz     L327
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x20], esi
        jz      L316

        /* local_8 != local_4: append to existing list */
        lea     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    eax
        call FUN_00581264
        mov     eax, dword ptr [esp + 0x1c]
        add     esp, 0x8
        add     eax, 0x4
        mov     dword ptr [esp + 0x14], eax
        jmp     L327

L316:
        /* local_8 == local_4: grow list */
        push    0x1
        lea     edx, dword ptr [esp + 0x24]
        push    edx
        push    eax
        lea     ecx, dword ptr [esp + 0x1c]
        call FUN_00580c43

L327:
        mov     ecx, ebx
        add     edi, 0x4
        call FUN_0064dfe9
        cmp     edi, dword ptr [eax + 0x4]
        jnz     L284

L33a:
        /* Iterate through collected results, calling FUN_00568ea0 for each */
        mov     edi, dword ptr [esp + 0x10]
        cmp     edi, dword ptr [esp + 0x14]
        jz      L382

        mov     ebp, dword ptr [esp + 0x38]  /* param_7 */
        mov     ebx, dword ptr [esp + 0x34]  /* param_6 */

L34c:
        mov     eax, dword ptr [esp + 0x30]  /* param_5 */
        mov     ecx, dword ptr [esp + 0x2c]  /* param_4 */
        mov     edx, dword ptr [esp + 0x28]  /* param_3 */
        push    ebp
        push    ebx
        push    eax
        mov     eax, dword ptr [esp + 0x30]  /* param_2 (adjusted for pushes) */
        push    ecx
        mov     ecx, dword ptr [edi]         /* *local_c */
        push    edx
        push    eax
        push    ecx
        call FUN_100568d50
        mov     esi, eax
        add     esp, 0x1c
        test    esi, esi
        jge     L39c
        mov     eax, dword ptr [esp + 0x14]
        add     edi, 0x4
        cmp     edi, eax
        jnz     L34c
        mov     edi, dword ptr [esp + 0x10]

L382:
        test    edi, edi
        jz      L38f
        push    edi
        call FUN_10040836e
        add     esp, 0x4

L38f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xfffffffe
        pop     ebx
        add     esp, 0x0c
        ret

L39c:
        /* Success path */
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      L3ad
        push    eax
        call FUN_100408350
        add     esp, 0x4

L3ad:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x0c
        ret
    }


}
