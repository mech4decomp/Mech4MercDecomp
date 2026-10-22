/*
 * FUN_0064aff0 (710 B) — __thiscall ABL module/state constructor. Assigns a
 * unique id (g_0080d96c), allocates static-data arrays via the stack heap
 * (g_008058b8), registers the object in g_0080d974[g_0080d980], and (when
 * g_007f2ba8 is set) builds WatchManager/BreakPointManager sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0080d96c;
extern int  g_0080d970;
extern int  g_008058b8;
extern int  g_0080d980;
extern int  g_0080d974;
extern int  g_007f2ba8;
extern int  g_007b5a30;
extern int  g_007b5a34;

extern char g_792c00[];
extern char g_792bbc[];
extern char g_792b30[];
extern char g_792ba0[];
extern char g_792b70[];
extern char g_792b3c[];

extern int (__cdecl *g_0076b420)(char *, const char *, ...);

extern int  __cdecl FUN_006f3c80(int, int);
extern void __cdecl FUN_0061ebc0(int, int *, int);
extern void __cdecl FUN_00562f10(int, const char *);
extern int  __cdecl FUN_0064ff50(const char *, int);
extern int  __cdecl FUN_0061f110(int);
extern int  __cdecl FUN_0061f270(void);
extern int  __cdecl FUN_0061f690(int);
extern int  __cdecl FUN_0061f7f0(void);

__declspec(naked) int FUN_0064aff0(void)
{
    __asm {
        sub     esp, 114h
        mov     eax, dword ptr [g_0080d96c]
        push    ebx
        xor     ebx, ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], eax
        inc     eax
        mov     dword ptr [g_0080d96c], eax
        mov     eax, dword ptr [esp+124h]
        lea     ecx, [eax+eax*4]
        shl     ecx, 3
        mov     dword ptr [esi+20h], eax
        mov     eax, dword ptr [g_0080d970]
        mov     ebp, dword ptr [ecx+eax*1+18h]
        cmp     ebp, ebx
        push    edi
        mov     byte ptr [esi+4], bl
        mov     byte ptr [esi+2ch], bl
        mov     dword ptr [esi+30h], ebx
        mov     dword ptr [esi+34h], ebx
        mov     dword ptr [esi+38h], ebx
        mov     byte ptr [esi+3ch], bl
        mov     byte ptr [esi+3dh], bl
        mov     byte ptr [esi+3eh], bl
        mov     byte ptr [esi+3fh], bl
        mov     dword ptr [esi+24h], ebx
        mov     dword ptr [esp+14h], ecx
        jz      L_b1aa
        mov     edi, dword ptr [g_008058b8]
        mov     eax, dword ptr [edi+0ch]
        cmp     eax, ebx
        jz      L_b0b1
        push    eax
        lea     ecx, [ebp*4]
        push    ecx
        call    FUN_006f3c80
        lea     ecx, [edi+10h]
        mov     edi, dword ptr [ecx+8]
        mov     edx, eax
        mov     eax, dword ptr [ecx+4]
        cmp     eax, edi
        mov     dword ptr [esp+10h], edx
        jz      L_b096
        cmp     eax, ebx
        jz      L_b082
        mov     dword ptr [eax], edx
L_b082:
        mov     edi, dword ptr [esp+10h]
        add     eax, 4
        mov     dword ptr [ecx+4], eax
        mov     ecx, dword ptr [esp+14h]
        mov     dword ptr [esp+18h], edi
        jmp     L_b0b7
L_b096:
        push    1
        lea     edx, [esp+14h]
        push    edx
        push    eax
        call    FUN_0061ebc0
        mov     edi, dword ptr [esp+10h]
        mov     ecx, dword ptr [esp+14h]
        mov     dword ptr [esp+18h], edi
        jmp     L_b0b7
L_b0b1:
        mov     dword ptr [esp+18h], ebx
        mov     edi, ebx
L_b0b7:
        cmp     edi, ebx
        mov     dword ptr [esi+24h], edi
        jnz     L_b0e3
        mov     eax, dword ptr [esi]
        push    eax
        lea     ecx, [esp+28h]
        push    offset g_792c00
        push    ecx
        call    dword ptr [g_0076b420]
        lea     edx, [esp+30h]
        push    edx
        push    ebx
        call    FUN_00562f10
        mov     ecx, dword ptr [esp+28h]
        add     esp, 14h
L_b0e3:
        cmp     ebp, ebx
        mov     eax, dword ptr [g_0080d970]
        mov     eax, dword ptr [ecx+eax*1+1ch]
        jle     L_b1aa
        mov     edx, edi
        sub     eax, edi
        mov     dword ptr [esp+10h], edx
        mov     dword ptr [esp+20h], eax
        jmp     L_b106
L_b102:
        mov     eax, dword ptr [esp+20h]
L_b106:
        mov     ecx, dword ptr [eax+edx*1]
        cmp     ecx, ebx
        jle     L_b196
        mov     edi, dword ptr [g_008058b8]
        mov     eax, dword ptr [edi+0ch]
        cmp     eax, ebx
        jz      L_b165
        push    eax
        push    ecx
        call    FUN_006f3c80
        lea     ecx, [edi+10h]
        mov     edi, dword ptr [ecx+8]
        mov     edx, eax
        mov     eax, dword ptr [ecx+4]
        cmp     eax, edi
        mov     dword ptr [esp+1ch], edx
        jz      L_b14e
        cmp     eax, ebx
        jz      L_b13e
        mov     dword ptr [eax], edx
L_b13e:
        mov     edx, dword ptr [esp+10h]
        add     eax, 4
        mov     dword ptr [ecx+4], eax
        mov     eax, dword ptr [esp+1ch]
        jmp     L_b167
L_b14e:
        push    1
        lea     edx, [esp+20h]
        push    edx
        push    eax
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp+1ch]
        mov     edx, dword ptr [esp+10h]
        jmp     L_b167
L_b165:
        xor     eax, eax
L_b167:
        mov     dword ptr [edx], eax
        cmp     dword ptr [esp+18h], ebx
        jnz     L_b198
        mov     eax, dword ptr [esi]
        push    eax
        lea     ecx, [esp+28h]
        push    offset g_792bbc
        push    ecx
        call    dword ptr [g_0076b420]
        lea     edx, [esp+30h]
        push    edx
        push    ebx
        call    FUN_00562f10
        mov     edx, dword ptr [esp+24h]
        add     esp, 14h
        jmp     L_b198
L_b196:
        mov     dword ptr [edx], ebx
L_b198:
        add     edx, 4
        dec     ebp
        mov     dword ptr [esp+10h], edx
        jnz     L_b102
        mov     ecx, dword ptr [esp+14h]
L_b1aa:
        mov     eax, dword ptr [g_0080d970]
        inc     dword ptr [ecx+eax*1+24h]
        mov     eax, dword ptr [ecx+eax*1+4]
        cmp     dword ptr [eax+18h], 0ah
        mov     byte ptr [esi+2ch], bl
        jnz     L_b1e9
        mov     dword ptr [eax+28h], ebx
        mov     eax, dword ptr [eax+30h]
        push    eax
        push    offset g_792b30
        call    FUN_0064ff50
        add     esp, 8
        cmp     eax, ebx
        mov     dword ptr [esi+38h], eax
        jnz     L_b1e9
        push    offset g_792ba0
        push    ebx
        call    FUN_00562f10
        add     esp, 8
L_b1e9:
        mov     eax, dword ptr [g_0080d980]
        mov     ecx, dword ptr [g_0080d974]
        mov     dword ptr [ecx+eax*4], esi
        inc     eax
        mov     dword ptr [g_0080d980], eax
        cmp     dword ptr [g_007f2ba8], ebx
        jz      L_b2a7
        push    0ch
        call    FUN_0061f110
        add     esp, 4
        cmp     eax, ebx
        jz      L_b220
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax+8], ebx
        mov     edi, eax
        jmp     L_b222
L_b220:
        xor     edi, edi
L_b222:
        cmp     edi, ebx
        mov     dword ptr [esi+30h], edi
        jnz     L_b237
        push    offset g_792b70
        push    ebx
        call    FUN_00562f10
        add     esp, 8
L_b237:
        mov     edx, dword ptr [g_007b5a30]
        push    edx
        mov     ecx, edi
        call    FUN_0061f270
        test    eax, eax
        jz      L_b257
        push    offset g_792b70
        push    ebx
        call    FUN_00562f10
        add     esp, 8
L_b257:
        push    0ch
        call    FUN_0061f690
        add     esp, 4
        cmp     eax, ebx
        jz      L_b271
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax+4], ebx
        mov     dword ptr [eax+8], ebx
        mov     edi, eax
        jmp     L_b273
L_b271:
        xor     edi, edi
L_b273:
        cmp     edi, ebx
        mov     dword ptr [esi+34h], edi
        jnz     L_b288
        push    offset g_792b3c
        push    ebx
        call    FUN_00562f10
        add     esp, 8
L_b288:
        mov     eax, dword ptr [g_007b5a34]
        push    eax
        mov     ecx, edi
        call    FUN_0061f7f0
        test    eax, eax
        jz      L_b2a7
        push    offset g_792b3c
        push    ebx
        call    FUN_00562f10
        add     esp, 8
L_b2a7:
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 114h
        ret     4
    }
}
